int __fastcall sub_3DFAC(unsigned __int8 **a1, int *a2)
{
  _BYTE *v2; // r2
  int v3; // r3
  bool v4; // zf
  _BYTE *v5; // r3
  _BYTE *v6; // r2
  _BYTE *v7; // r3
  int result; // r0

  v2 = *a1;
  v3 = **a1;
  if ( **a1 )
  {
    while ( v3 != 44 )
    {
      v4 = v3 == 92;
      v5 = v2;
      if ( v4 && v2[1] )
        v5 = v2 + 1;
      *a1 = v5 + 1;
      v6 = (_BYTE *)(*a2)++;
      *v6 = *v5;
      v2 = *a1;
      v3 = **a1;
      if ( !**a1 )
        goto LABEL_10;
    }
    *a1 = v2 + 1;
  }
LABEL_10:
  v7 = (_BYTE *)*a2;
  result = *a2 + 1;
  *a2 = result;
  *v7 = 0;
  return result;
}
