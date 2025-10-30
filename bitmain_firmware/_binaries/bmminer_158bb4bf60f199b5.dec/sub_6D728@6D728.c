int __fastcall sub_6D728(int *a1, char a2, int a3)
{
  int v3; // r3
  bool v4; // zf
  int result; // r0

  v3 = a1[1];
  v4 = v3 == 0;
  if ( v3 )
  {
    a3 = *a1;
    --v3;
    a2 = 0;
    a1[1] = v3;
    result = *(unsigned __int8 *)(a3 + v3);
  }
  else
  {
    result = 0;
  }
  if ( !v4 )
    *(_BYTE *)(a3 + v3) = a2;
  return result;
}
