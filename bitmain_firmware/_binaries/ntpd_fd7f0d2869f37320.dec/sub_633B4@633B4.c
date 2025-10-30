int *__fastcall sub_633B4(int a1, __int16 a2, const void *a3, size_t a4, int a5)
{
  _DWORD *v9; // r0
  _DWORD *v10; // r5
  int v11; // r9
  void *v12; // r5
  int *result; // r0
  void *v14; // r0
  void *v15; // r0
  _DWORD *v16; // r3

  v9 = sub_62E48(a1);
  v10 = v9;
  if ( v9 && (v11 = v9[6], v11 == a1) )
  {
    v14 = (void *)v9[3];
    if ( v14 )
    {
      memset(v14, 0, v10[8]);
      free((void *)v10[3]);
    }
    v15 = (void *)sub_64B04(0, a4 + 1, 0, 0);
    v16 = (_DWORD *)v10[4];
    *((_WORD *)v10 + 14) = a2;
    v10[8] = a4;
    v10[3] = v15;
    if ( v16 != (_DWORD *)a5 )
    {
      sub_62688(v16);
      v15 = (void *)v10[3];
      v10[4] = a5;
    }
    result = (int *)memcpy(v15, a3, a4);
    if ( v11 == cache_keyid )
      return sub_624E4();
  }
  else
  {
    v12 = (void *)sub_64B04(0, a4 + 1, 0, 0);
    memcpy(v12, a3, a4);
    return (int *)sub_62B84(a1, 0, a2, 0, a4, (int)v12, a5);
  }
  return result;
}
