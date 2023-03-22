#!/usr/bin/env sh
echo "Enter the evaluated project path:"
# read -r eval_path
eval_path="/Users/parpi/42/_testdir/eval_c00"

echo "Running norminette checks..."
#norminette "$eval_path" -R CheckForbiddenSourceHeader

echo "Enter a path to search for main.c in its subdirectories:"
# read -r path
path="/Users/parpi/42/_testdir/c00"

# Copy all `main.c` files in "$path" subdirectories onto evaluated project subdirectories path.
find "$path" -type d -exec sh -c '
  eval_path="$1"
  for dir in "$2"/*; do
    if [ -f "$dir/main.c" ]; then
      dest_dir="$eval_path/$(basename "$dir")"
      echo "copying main.c from $dir -> $dest_dir"
      mkdir -p "$dest_dir"
      cp "$dir/main.c" "$dest_dir/main.c"
    fi
  done
' sh "$eval_path" {} +

# TODO fix this loop
# Loop through all subdirectories in the evaluated project path and compile `*.c` files into user_exe
for dir in "$eval_path"/*; do
    echo "testing $dir"
    if [ -n "$(find "$dir" -maxdepth 1 -type f -name "*.c" -print -quit)" ]; then
        echo "Compiling *.c files in $dir to user_exe"
        cc -Wall -Wextra -Werror "$dir"/*.c -o user_exe
        read -p "Press enter to continue or Ctrl+C to abort" -n 1 -r
    fi
done
