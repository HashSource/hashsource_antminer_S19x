int sub_570E4()
{
  int v0; // r2
  int v1; // r3
  _BOOL4 v2; // r1
  _BYTE *v3; // r0
  _BYTE *v5; // r3
  _BYTE *v6; // r12
  int v7; // r3
  _BYTE v8[260]; // [sp+0h] [bp-104h] BYREF

  v0 = dword_474808;
  v1 = *(_DWORD *)(dword_487668 + 48);
  v2 = v1 == *(_DWORD *)(dword_487668 + 44);
  if ( dword_474808 > 253 )
    sub_946E0("Control nesting too deep!", v2);
  if ( v1 != *(_DWORD *)(dword_487668 + 44) )
  {
    if ( v1 )
    {
      v3 = 0;
      return sub_243ED8(v3, v2, "commands");
    }
    v3 = (_BYTE *)dword_48A544;
    if ( !dword_48A544 )
      return sub_243ED8(v3, v2, "commands");
  }
  if ( dword_474808 <= 0 )
  {
    v7 = 1;
    v0 = 0;
    v3 = v8;
  }
  else
  {
    v3 = v8;
    v5 = v8;
    v6 = &v8[dword_474808];
    do
      *v5++ = 32;
    while ( v5 != v6 );
    v7 = v0 + 1;
  }
  v8[v0] = 62;
  v8[v7] = 0;
  return sub_243ED8(v3, v2, "commands");
}
