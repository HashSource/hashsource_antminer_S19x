int __fastcall sub_139038(int *a1, _DWORD *a2)
{
  int result; // r0
  _DWORD **v5; // r4
  char *v6; // r0
  _DWORD *v7; // r0
  int v8; // r7
  int v9; // r8
  int v10; // [sp+Ch] [bp-4h] BYREF

  result = sub_138ED0(a1);
  v5 = (_DWORD **)result;
  if ( result )
  {
    if ( *(_DWORD *)result && (*(_DWORD *)(*(_DWORD *)result + 12) & 0x20) != 0 )
    {
      v7 = sub_B7144(a2, 1025);
      v8 = (int)v7;
      if ( !v7 )
      {
        sub_D0048(46, 110, 105, (int)"crypto/cms/cms_lib.c", 120);
        return 0;
      }
      v9 = sub_B6ECC((int)v7, 3, 0, (int)&v10);
      sub_B6710(v8, 512);
      sub_B6ECC(v8, 130, 0, 0);
      sub_AE174(*v5, v10, v9);
      (*v5)[3] &= ~0x20u;
    }
    v6 = sub_EAC84(*a1);
    if ( v6 != (char *)23 )
    {
      if ( (int)v6 <= 23 )
      {
        if ( v6 != (char *)21 )
        {
          if ( v6 == (char *)22 )
            return sub_13A42C(a1, a2);
          goto LABEL_13;
        }
      }
      else if ( v6 != (char *)26 && v6 != (char *)786 )
      {
        if ( v6 == (char *)25 )
          return sub_1790AC(a1, a2, 0);
LABEL_13:
        sub_D0048(46, 110, 156, (int)"crypto/cms/cms_lib.c", 147);
        return 0;
      }
    }
    return 1;
  }
  return result;
}
