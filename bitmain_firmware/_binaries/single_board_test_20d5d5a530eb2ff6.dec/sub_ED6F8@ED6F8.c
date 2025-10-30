int __fastcall sub_ED6F8(_DWORD **a1, char *a2, int *a3, int (__fastcall *a4)(_BYTE *, int, _DWORD, char *), char *s)
{
  int v5; // r4
  signed int v7; // r5
  int v8; // r7
  void *v9; // r0
  int *v11; // r0
  int *v12; // r7
  int v13; // r4
  unsigned int v14; // r3
  int v17; // [sp+1Ch] [bp-448h] BYREF
  _BYTE v18[64]; // [sp+20h] [bp-444h] BYREF
  _BYTE v19[1028]; // [sp+60h] [bp-404h] BYREF

  v5 = (int)*a1;
  v17 = *a3;
  if ( !v5 )
    return 1;
  if ( a4 )
    v7 = a4(v19, 1024, 0, s);
  else
    v7 = sub_ED544(v19, 1024, 0, s);
  if ( v7 < 0 )
  {
    sub_D0048(9, 106, 104, (int)"crypto/pem/pem_lib.c", 434);
    return 0;
  }
  else
  {
    v8 = (int)*a1;
    v9 = sub_D902C();
    if ( sub_15DEF4(v8, v9, a1 + 1, v19, v7, 1, v18, 0) && (v11 = (int *)sub_D7A5C(), (v12 = v11) != 0) )
    {
      if ( sub_D8770(v11, *a1, 0, (int)v18, a1 + 1)
        && sub_D7FA8(v12, (int)a2, &v17, a2, v17)
        && (v14 = (unsigned int)&a2[v17], *a3 = v17, (v13 = sub_D81A0(v12, v14, &v17)) != 0) )
      {
        *a3 += v17;
      }
      else
      {
        v13 = 0;
        sub_D0048(9, 106, 101, (int)"crypto/pem/pem_lib.c", 461);
      }
      sub_D7A6C(v12);
      sub_E07F8(v19, 0x400u);
      sub_E07F8(v18, 0x40u);
      return v13;
    }
    else
    {
      return 0;
    }
  }
}
