find "post" -type f -iname '*.md' -exec sh -c '
    path="${1%/*}"; filename="${1##*/}";
    cp -nv "${1}" "temp/${path##*/}.${filename}" ' sh_cp {} \;
