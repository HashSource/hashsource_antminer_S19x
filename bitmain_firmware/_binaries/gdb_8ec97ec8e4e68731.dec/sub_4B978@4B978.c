int __fastcall sub_4B978(int a1)
{
  int v1; // r0
  bool v2; // zf
  bool v3; // nf
  int result; // r0
  int v5; // [sp+4h] [bp-8h] BYREF

  v1 = sub_4B754(a1, 1, &v5);
  v2 = v1 == 0;
  v3 = v1 < 0;
  if ( v1 <= 0 )
    result = 0;
  else
    result = v5;
  if ( !v3 && !v2 )
    return result == 1;
  return result;
}
