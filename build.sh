# mod_addons_path="./@folk_airsoft/addons"
mod_addons_path="/f/SteamLibrary/steamapps/common/Arma 3/@folk_airsoft/addons"
private_key_path="./.private\folk_airsoft_v1.0.0.biprivatekey"
addons=(
    folk_airsoft_core
    folk_airsoft_hk416
    folk_airsoft_p90
    folk_airsoft_p99
    folk_airsoft_kozlice
)
# rm -r "$mod_addons_path/*"
for addon in "${addons[@]}"; do
    echo "${addon}"
    pbo_path="${mod_addons_path}/${addon}.pbo"
    armake build --force "${addon}" "${pbo_path}"
    armake sign --force "${private_key_path}" "${pbo_path}"
done
