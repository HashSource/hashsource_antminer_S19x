int __fastcall sub_31538(_BYTE *a1, unsigned __int8 *a2, int a3)
{
  bool v3; // cc
  int v4; // r3
  int v8; // r7
  unsigned __int8 *v9; // r8
  unsigned __int8 *v10; // r4
  char *v11; // r11
  int v12; // r6
  int v13; // t1
  char v14; // r5
  char v15; // r4
  int v16; // [sp+Ch] [bp-808h]
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v3 = (int)a1 <= 0;
  if ( a1 )
    v3 = a3 <= 0;
  v4 = v3;
  if ( !a2 )
    v4 = 1;
  if ( v4 )
  {
    if ( (unsigned int)dword_9E31C > 4 )
    {
      snprintf(s, 0x800u, "s2hex para error dst(%p), src(%p), inlen(%d)\n", a1, a2, a3);
      sub_47AB4(4, s, 0);
    }
    return -1;
  }
  else
  {
    v8 = a3 >> 1;
    v16 = a3 & 1;
    if ( a3 >> 1 )
    {
      v9 = &a2[2 * v8];
      v10 = a2;
      v11 = a1 - 1;
      do
      {
        v12 = v10[1];
        v13 = *v10;
        v10 += 2;
        v14 = sub_314BC(v13);
        *++v11 = sub_314BC(v12) ^ (16 * v14);
      }
      while ( v10 != v9 );
    }
    if ( v16 )
    {
      v15 = sub_314BC(a2[2 * v8]);
      a1[v8] = sub_3145C(0) ^ (16 * v15);
    }
    return v8 + v16;
  }
}
