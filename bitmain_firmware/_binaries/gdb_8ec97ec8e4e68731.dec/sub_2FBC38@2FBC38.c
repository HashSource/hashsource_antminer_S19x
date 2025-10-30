int __fastcall sub_2FBC38(const char *a1, int a2, _DWORD *a3)
{
  void *v5; // r0
  int (__fastcall *v6)(_DWORD *); // r4
  int result; // r0
  char *v8; // r0
  int v9; // [sp+Ch] [bp-44h] BYREF
  _BYTE v10[4]; // [sp+10h] [bp-40h] BYREF
  int v11; // [sp+14h] [bp-3Ch]
  int v12; // [sp+28h] [bp-28h]
  _DWORD v13[8]; // [sp+30h] [bp-20h] BYREF

  *a3 = 0;
  v5 = dlopen(a1, 2);
  if ( !v5 )
  {
    v8 = dlerror();
    sub_2A6A5C("%s\n", v8);
    return 0;
  }
  v6 = (int (__fastcall *)(_DWORD *))dlsym(v5, "onload");
  if ( v6 )
  {
    v13[1] = sub_2FB994;
    v13[3] = sub_2FB7FC;
    v13[5] = sub_2FB95C;
    v13[6] = 0;
    v13[7] = 0;
    v13[0] = 11;
    v13[2] = 5;
    v13[4] = 8;
    if ( !v6(v13) )
    {
      *a3 = 1;
      *(_BYTE *)(a2 + 44) = *(_BYTE *)(a2 + 44) & 0xCF | 0x20;
      if ( off_48FD28 )
      {
        v9 = 0;
        result = sub_2FBB3C(a2, (int)v10);
        if ( !result )
          return result;
        v12 = a2;
        lseek64(v11);
        off_48FD28(v10, &v9);
        lseek64(v11);
        if ( v9 )
        {
          *(_BYTE *)(a2 + 44) = *(_BYTE *)(a2 + 44) & 0xCF | 0x10;
          return 1;
        }
      }
    }
  }
  return 0;
}
