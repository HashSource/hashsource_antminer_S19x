void sub_FA464()
{
  const char **v0; // r3
  const char *v1; // r7
  size_t v2; // r0
  void *v3; // r5
  _DWORD *v4; // r2
  int v5; // r0
  int v6; // r3
  _DWORD *v7; // r0
  void *ptr[2]; // [sp+0h] [bp-80h] BYREF
  _DWORD v9[4]; // [sp+8h] [bp-78h] BYREF
  _DWORD v10[26]; // [sp+18h] [bp-68h] BYREF

  v0 = *(const char ***)(dword_487D2C + 8);
  if ( !v0 )
    return;
  v1 = *v0;
  ptr[0] = v9;
  if ( !v1 )
    sub_33D0B8("basic_string::_M_construct null not valid");
  v2 = strlen(v1);
  v3 = (void *)v2;
  v10[0] = v2;
  if ( v2 > 0xF )
  {
    v7 = (_DWORD *)sub_33B2BC(ptr, v10, 0);
    ptr[0] = v7;
    v9[0] = v10[0];
LABEL_15:
    memcpy(v7, v1, (size_t)v3);
    v3 = (void *)v10[0];
    v4 = ptr[0];
    goto LABEL_6;
  }
  if ( v2 == 1 )
  {
    v4 = v9;
    LOBYTE(v9[0]) = *v1;
    goto LABEL_6;
  }
  if ( v2 )
  {
    v7 = v9;
    goto LABEL_15;
  }
  v4 = v9;
LABEL_6:
  ptr[1] = v3;
  *((_BYTE *)v3 + (_DWORD)v4) = 0;
  v5 = _xstat64(3, ptr[0], v10);
  if ( v5 || (v6 = *(_DWORD *)(dword_487D2C + 12)) == 0 || v6 == v10[20] )
    sub_2A8F64(v5);
  else
    sub_94D50((const char *)ptr[0], 0);
  if ( ptr[0] != v9 )
    sub_339E64(ptr[0]);
}
