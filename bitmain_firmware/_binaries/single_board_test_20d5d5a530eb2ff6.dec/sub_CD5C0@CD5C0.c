int __fastcall sub_CD5C0(int a1, const void *a2, size_t a3)
{
  int v3; // r4
  bool v6; // zf
  int v9; // r3
  void *v10; // r0
  void *v11; // r5
  int v12; // r3

  v3 = **(_DWORD **)(a1 + 12);
  if ( !a2 )
    goto LABEL_7;
  v6 = v3 == 1034;
  if ( v3 != 1034 )
    v6 = v3 == 1087;
  if ( !v6 )
  {
    if ( v3 == 1035 )
      v9 = 56;
    else
      v9 = 57;
    if ( a3 == v9 )
      goto LABEL_12;
LABEL_7:
    sub_D0048(16, 266, 102, "crypto/ec/ecx_meth.c", 65);
    return 0;
  }
  if ( a3 != 32 )
    goto LABEL_7;
LABEL_12:
  v10 = (void *)sub_E0740(64, "crypto/ec/ecx_meth.c", 70);
  v11 = v10;
  if ( v10 )
  {
    memcpy(v10, a2, a3);
    sub_D9F44(a1, v3, v11, v12);
    return 1;
  }
  else
  {
    sub_D0048(16, 266, 65, "crypto/ec/ecx_meth.c", 72);
    return 0;
  }
}
