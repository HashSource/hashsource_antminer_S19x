int __fastcall sub_BC710(int a1, _BYTE **a2, unsigned int a3)
{
  _BYTE *v4; // r5
  _BYTE *v7; // r7
  unsigned int v8; // r5
  unsigned int v9; // r4
  int result; // r0
  bool v11; // zf
  int v12; // r2

  if ( *(_DWORD *)a1 )
  {
    sub_D0048(50, 112, 103, "crypto/ct/ct_oct.c", 31);
    return -1;
  }
  if ( a3 <= 4 )
  {
    v12 = 42;
LABEL_12:
    sub_D0048(50, 112, 107, "crypto/ct/ct_oct.c", v12);
    return -1;
  }
  v4 = *a2;
  *(_BYTE *)(a1 + 40) = **a2;
  *(_BYTE *)(a1 + 41) = v4[1];
  if ( !sub_BD304() )
  {
    v12 = 51;
    goto LABEL_12;
  }
  v7 = v4 + 4;
  v8 = (unsigned __int8)v4[3] | ((unsigned __int8)v4[2] << 8);
  v9 = a3 - (v7 - *a2);
  if ( v8 > v9 )
  {
    v12 = 58;
    goto LABEL_12;
  }
  result = sub_BD288(a1, v7, v8);
  v11 = result == 1;
  if ( result == 1 )
    v9 -= v8;
  else
    result = -1;
  if ( v11 )
  {
    result = a3 - v9;
    *a2 = &v7[v8];
  }
  return result;
}
