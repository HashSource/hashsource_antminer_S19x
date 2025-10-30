int __fastcall sub_1CF4FC(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // r7
  _DWORD *v3; // r8
  int v4; // t1
  int v5; // r5
  int v6; // r0
  int result; // r0

  v1 = a1;
  v2 = *a1;
  while ( 1 )
  {
    v3 = v1;
    v4 = *--v1;
    v5 = sub_21B7DC(v2);
    v6 = sub_21B7DC(v4);
    result = sub_25A8B8(v5, v6);
    if ( result >= 0 )
      break;
    v1[1] = *v1;
  }
  *v3 = v2;
  return result;
}
