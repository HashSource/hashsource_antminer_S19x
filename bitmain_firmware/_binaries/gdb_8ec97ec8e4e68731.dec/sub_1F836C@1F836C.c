int __fastcall sub_1F836C(_BYTE *a1)
{
  int result; // r0
  int v2; // r1
  int v3; // r2
  int v4; // r0
  _BYTE v5[28]; // [sp+0h] [bp-1Ch] BYREF

  if ( !dword_489360 )
    return sub_259F10("No bookmarks.\n");
  if ( !a1 || !*a1 )
    return sub_1F7E78(-1);
  for ( result = sub_5ADF4((int)v5, (int)a1); !v5[0]; result = sub_1F7E78(v4) )
    v4 = sub_5AE34((int)v5, v2, v3);
  return result;
}
