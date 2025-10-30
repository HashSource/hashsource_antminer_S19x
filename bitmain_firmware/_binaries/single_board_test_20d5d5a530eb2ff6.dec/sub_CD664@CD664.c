int __fastcall sub_CD664(int a1, int a2, size_t a3, int *a4)
{
  int v6; // r0
  int v7; // r1
  bool v8; // zf
  int v9; // r1
  int v10; // r0
  int v11; // r0
  bool v12; // zf
  int v14; // r8
  bool v16; // zf
  int v17; // r3
  void *v18; // r0
  void *v19; // r4
  int v20; // r3

  if ( a2 == 9 )
  {
    v14 = **(_DWORD **)(a1 + 12);
    if ( !a4 )
      goto LABEL_27;
    v16 = v14 == 1034;
    if ( v14 != 1034 )
      v16 = v14 == 1087;
    if ( v16 )
      v17 = 32;
    else
      v17 = v14 == 1035 ? 56 : 57;
    if ( a3 == v17 )
    {
      v18 = (void *)sub_E0740(64, "crypto/ec/ecx_meth.c", 70);
      v19 = v18;
      if ( v18 )
      {
        memcpy(v18, a4, a3);
        sub_D9F44(a1, v14, v19, v20);
        return 1;
      }
      else
      {
        sub_D0048(16, 266, 65, "crypto/ec/ecx_meth.c", 72);
        return 0;
      }
    }
    else
    {
LABEL_27:
      sub_D0048(16, 266, 102, "crypto/ec/ecx_meth.c", 65);
      return 0;
    }
  }
  else if ( a2 == 10 )
  {
    v6 = *(_DWORD *)(a1 + 24);
    if ( !v6 )
      return 0;
    v7 = **(_DWORD **)(a1 + 12);
    v8 = v7 == 1034;
    if ( v7 != 1034 )
      v8 = v7 == 1087;
    if ( v8 )
      v9 = 32;
    else
      v9 = v7 == 1035 ? 56 : 57;
    v10 = sub_E9E68(v6, v9, "crypto/ec/ecx_meth.c", 329);
    *a4 = v10;
    if ( v10 )
    {
      v11 = **(_DWORD **)(a1 + 12);
      v12 = v11 == 1034;
      if ( v11 != 1034 )
        v12 = v11 == 1087;
      if ( v12 )
      {
        return 32;
      }
      else if ( v11 == 1035 )
      {
        return 56;
      }
      else
      {
        return 57;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return -2;
  }
}
