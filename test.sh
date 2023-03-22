#!/usr/bin/env sh
echo "Enter the evaluated project path:"
read -r eval_path

echo "Running norminette checks..."
norminette "$eval_path" -R CheckForbiddenSourceHeader

echo "Enter a path to search for main.c in its subdirectories:"
read -r path

# Copy all `main.c` files in "$path" subdirectories onto evaluated project subdirectories path.
find "$path" -type d -exec sh -c 'for dir; do if [ -f "$dir/main.c" ]; then cp "$dir/main.c" "$eval_path/$dir/main.c"; fi; done' sh {} +

# Loop through all subdirectories in the evaluated project path and compile `*.c` files into user_exe
for dir in $eval_path; do
    echo "testing $dir"
    if [ -n "$(find "$dir" -maxdepth 1 -type f -name "*.c" -print -quit)" ]; then
        echo "Compiling *.c files in $dir to user_exe"
        cc -Wall -Wextra -Werror "$dir"*.c -o user_exe
        read -p "Press enter to continue or Ctrl+C to abort" -n 1 -r
    fi
done
