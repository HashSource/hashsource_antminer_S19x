int __fastcall sub_182230(int a1)
{
  _DWORD *v1; // r3
  _DWORD *v2; // r5
  int result; // r0
  int v4; // [sp+4h] [bp-10h]
  int v5; // [sp+8h] [bp-Ch]
  int v6; // [sp+Ch] [bp-8h]

  if ( a1 )
    LOWORD(v1) = -17460;
  else
    LOWORD(v1) = 30956;
  LOWORD(v2) = (unsigned __int16)&dword_487950;
  if ( a1 )
    HIWORD(v1) = 70;
  else
    HIWORD(v1) = 72;
  HIWORD(v2) = (unsigned int)&dword_487950 >> 16;
  v4 = *v1;
  v5 = v1[1];
  v6 = v1[2];
  if ( *v2 )
  {
    result = sub_231EB4(*v1, v1[1], v1[2]);
    if ( !*v2 )
      return result;
    return sub_23F42C(v4, v5, v6, 1);
  }
  result = sub_231F0C();
  if ( *v2 )
    return sub_23F42C(v4, v5, v6, 1);
  return result;
}
