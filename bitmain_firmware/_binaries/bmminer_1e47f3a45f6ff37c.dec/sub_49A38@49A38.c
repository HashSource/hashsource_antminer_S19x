bool __fastcall sub_49A38(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r3
  int v5; // r4
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v11; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = *(_DWORD *)(dword_535D8C + 4);
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Check if read reg done, chain = %d, done_threshold = %d.\n", a1, 1);
    sub_3B6AC(4, s, 0, v11);
  }
  v3 = sub_26A44();
  if ( v3 )
  {
    v4 = a1 << 8;
    v5 = 0;
    --v4;
    v6 = v3 + v4;
    v7 = v2 + v4;
    v8 = v2 + v6;
    do
    {
      if ( *(unsigned __int8 *)++v7 )
        ++v5;
    }
    while ( v7 != v8 );
  }
  else
  {
    v5 = 0;
  }
  return v5 == sub_26A44();
}
