int __fastcall sub_305068(int a1)
{
  _DWORD *v1; // r3
  int result; // r0
  int v3; // r3
  bool v4; // zf
  char v5; // r0

  v1 = *(_DWORD **)(a1 + 28);
  if ( !v1 || a1 != *v1 )
    return 1;
  v3 = v1[1];
  v4 = v3 == 42;
  if ( v3 != 42 )
    v4 = v3 == 69;
  v5 = !v4;
  if ( v3 == 91 )
    v5 = 0;
  if ( v3 == 103 )
    v5 = 0;
  if ( v3 == 113 )
    v5 = 0;
  if ( v3 == 666 )
    result = 0;
  else
    result = v5 & 1;
  if ( ((v3 - 57) & 0xFFFFFFEF) == 0 )
    return 0;
  return result;
}
