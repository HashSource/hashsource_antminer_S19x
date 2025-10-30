_DWORD *__fastcall sub_30F28(_DWORD *a1)
{
  int v2; // r0
  _DWORD **v3; // r1
  _DWORD *result; // r0
  _DWORD *v5; // r3
  _DWORD *v6; // r2

  --LODWORD(mru_entries);
  v2 = sub_6D544(a1 + 11) & ~(-1 << mon_hash_bits);
  v3 = *(_DWORD ***)(mon_hash + 4 * v2);
  result = (_DWORD *)(mon_hash + 4 * v2);
  if ( v3 == a1 )
  {
    v6 = a1;
LABEL_10:
    *result = *a1;
    goto LABEL_11;
  }
  if ( v3 )
  {
    v5 = *v3;
    if ( !*v3 )
    {
      v6 = 0;
      goto LABEL_11;
    }
    while ( a1 != v5 )
    {
      v6 = (_DWORD *)*v5;
      v3 = (_DWORD **)v5;
      if ( !*v5 )
        goto LABEL_11;
      v5 = (_DWORD *)*v5;
    }
    result = v3;
    v6 = a1;
    goto LABEL_10;
  }
  v6 = 0;
LABEL_11:
  if ( v6 != a1 )
    sub_6FC54("ntp_monitor.c", 136, 1, "punlinked == mon");
  return result;
}
