int __fastcall sub_31397C(_DWORD *a1, int a2)
{
  unsigned __int8 *v2; // r3
  int v3; // r2
  int v4; // r12
  bool v5; // zf
  bool v6; // zf
  int v7; // r12
  unsigned __int8 *v8; // r3

  v2 = (unsigned __int8 *)a1[3];
  v3 = a2;
  v4 = *v2;
  v5 = v4 == 79;
  if ( v4 != 79 )
    v5 = v4 == 82;
  if ( !v5 )
    return a2;
  v6 = v4 == 82;
  v7 = a1[11];
  v8 = v2 + 1;
  if ( v6 )
    a2 = 31;
  a1[3] = v8;
  if ( v6 )
    v7 += 2;
  else
    a2 = 32;
  if ( !v6 )
    v7 += 3;
  a1[11] = v7;
  return sub_313728(a1, a2, (unsigned int)v3);
}
