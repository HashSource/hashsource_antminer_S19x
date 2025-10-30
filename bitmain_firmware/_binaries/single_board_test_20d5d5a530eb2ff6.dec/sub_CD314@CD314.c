int __fastcall sub_CD314(int a1, int a2)
{
  int result; // r0
  const void *v4; // r7
  size_t v5; // r8
  int v6; // r6
  bool v7; // zf
  int v8; // r3
  int v9; // r2
  void *v10; // r0
  void *v11; // r4
  int v12; // r3
  const void *v13; // [sp+8h] [bp-14h] BYREF
  size_t v14; // [sp+Ch] [bp-10h] BYREF
  _DWORD *v15; // [sp+10h] [bp-Ch] BYREF
  int v16; // [sp+14h] [bp-8h] BYREF

  result = sub_116488(0, &v13, &v14, &v15, a2);
  if ( result )
  {
    v4 = v13;
    v5 = v14;
    v6 = **(_DWORD **)(a1 + 12);
    if ( v15 )
    {
      sub_B294C(0, &v16, 0, v15);
      if ( v16 != -1 )
      {
        v9 = 59;
        goto LABEL_14;
      }
    }
    if ( !v4 )
      goto LABEL_13;
    v7 = v6 == 1034;
    if ( v6 != 1034 )
      v7 = v6 == 1087;
    if ( v7 )
      v8 = 32;
    else
      v8 = v6 == 1035 ? 56 : 57;
    if ( v5 != v8 )
    {
LABEL_13:
      v9 = 65;
LABEL_14:
      sub_D0048(16, 266, 102, "crypto/ec/ecx_meth.c", v9);
      return 0;
    }
    v10 = (void *)sub_E0740(64, "crypto/ec/ecx_meth.c", 70);
    v11 = v10;
    if ( v10 )
    {
      memcpy(v10, v4, v5);
      sub_D9F44(a1, v6, v11, v12);
      return 1;
    }
    else
    {
      sub_D0048(16, 266, 65, "crypto/ec/ecx_meth.c", 72);
      return 0;
    }
  }
  return result;
}
