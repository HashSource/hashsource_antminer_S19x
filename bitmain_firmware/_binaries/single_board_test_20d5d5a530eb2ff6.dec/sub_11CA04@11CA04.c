int __fastcall sub_11CA04(signed int *a1, int a2)
{
  int result; // r0
  _DWORD *v4; // r7
  signed int v5; // r6
  int v6; // r4
  int v7; // r0
  int v8; // r8
  const char *v9; // r5
  char *v10; // r4

  result = sub_122740(a2);
  v4 = (_DWORD *)result;
  if ( result )
  {
    v5 = *a1;
    if ( *a1 )
    {
LABEL_3:
      v6 = 0;
    }
    else
    {
      while ( v5 < sub_10C010((int)v4) )
      {
        v7 = sub_10C01C(v4, v5);
        v8 = *a1;
        v9 = *(const char **)(v7 + 4);
        if ( !*a1 )
        {
          v8 = sub_B211C();
          *a1 = v8;
          if ( !v8 )
            goto LABEL_3;
        }
        v10 = (char *)&unk_20F8EC;
        while ( strcmp(*((const char **)v10 + 2), v9) )
        {
          v10 += 12;
          if ( !*((_DWORD *)v10 + 1) )
            goto LABEL_3;
        }
        if ( !sub_125A14(v8, *(_DWORD *)v10, 1) || !*((_DWORD *)v10 + 1) )
          goto LABEL_3;
        ++v5;
      }
      v6 = 1;
    }
    sub_10BFDC((int)v4, (void (__fastcall *)(int))X509V3_conf_free);
    return v6;
  }
  return result;
}
