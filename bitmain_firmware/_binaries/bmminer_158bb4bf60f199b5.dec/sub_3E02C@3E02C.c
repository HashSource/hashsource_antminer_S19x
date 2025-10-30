int __fastcall sub_3E02C(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  size_t v7; // r0
  void *v8; // r5
  unsigned __int8 *v10[2]; // [sp+4h] [bp-80Ch] BYREF
  void *v11; // [sp+Ch] [bp-804h] BYREF
  char v12[2048]; // [sp+10h] [bp-800h] BYREF

  v10[0] = a1;
  v7 = strlen((const char *)a1);
  v8 = malloc(v7 + 1);
  v11 = v8;
  if ( !v8 )
  {
    strcpy(v12, "Failed to malloc pooldetails buf");
    sub_47AB4(3, v12, 1);
    sub_62EC0(1);
  }
  *a2 = v8;
  sub_3DFAC(v10, (int *)&v11);
  if ( *v10[0] && (*a3 = v11, sub_3DFAC(v10, (int *)&v11), *v10[0]) )
  {
    *a4 = v11;
    sub_3DFAC(v10, (int *)&v11);
    return 1;
  }
  else
  {
    free(v8);
    return 0;
  }
}
