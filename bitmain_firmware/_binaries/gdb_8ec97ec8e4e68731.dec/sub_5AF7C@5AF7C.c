int __fastcall sub_5AF7C(_BYTE *a1, int a2, int a3)
{
  int v4; // r0
  _BYTE v6[4]; // [sp+0h] [bp-20h] BYREF
  _BYTE *v7; // [sp+4h] [bp-1Ch]
  int v8; // [sp+8h] [bp-18h]
  int v9; // [sp+Ch] [bp-14h]
  int v10; // [sp+10h] [bp-10h]
  char v11; // [sp+14h] [bp-Ch]

  if ( !a1 || !*a1 )
    return 1;
  v7 = a1;
  v6[0] = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    v4 = sub_5AE34((int)v6, a2, a3);
    if ( !v4 )
      sub_946E0("Args must be numbers or '$' variables.");
    if ( v4 == a2 )
      break;
    if ( v6[0] )
      return 0;
  }
  return 1;
}
