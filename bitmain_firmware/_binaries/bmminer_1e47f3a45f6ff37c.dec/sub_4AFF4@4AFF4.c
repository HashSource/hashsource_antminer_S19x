int __fastcall sub_4AFF4(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  bool v3; // cc
  int v4; // r3
  int v7; // r8
  _BYTE *v8; // r6
  unsigned __int8 *v9; // r11
  _BYTE *v10; // r5
  int v11; // r7
  int v12; // t1
  char v13; // r4
  int v15; // r3
  char v16; // r4
  int v17; // [sp+Ch] [bp-808h]
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v3 = (int)a1 <= 0;
  if ( a1 )
    v3 = a3 <= 0;
  v4 = v3;
  if ( !a2 )
    v4 |= 1u;
  if ( v4 )
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "s2hex para error dst(%p), src(%p), inlen(%d)\n", a1, a2, a3);
      sub_3B6AC(4, s, 0, v15);
    }
    return -1;
  }
  else
  {
    v7 = a3 >> 1;
    v17 = a3 & 1;
    if ( a3 >> 1 )
    {
      v8 = &a1[v7];
      v9 = a2;
      v10 = a1;
      do
      {
        v11 = v9[1];
        v12 = *v9;
        v9 += 2;
        v13 = sub_4AF78(v12);
        *v10++ = sub_4AF78(v11) ^ (16 * v13);
      }
      while ( v10 != v8 );
    }
    if ( v17 )
    {
      v16 = sub_4AF78(a2[2 * v7]);
      a1[v7] = sub_15280(0) ^ (16 * v16);
    }
    return v7 + v17;
  }
}
