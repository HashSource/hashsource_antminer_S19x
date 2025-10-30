int __fastcall sub_21F4C(int result)
{
  int v1; // r12
  int v2; // r8
  int v3; // r6
  int v4; // r2
  unsigned int v5; // r2
  int v6; // lr
  int v7; // r7
  int v8; // r1
  int v9; // r6
  _WORD *v10; // r3
  int v11; // [sp+0h] [bp-1Ch]
  int v12; // [sp+4h] [bp-18h]
  int v13; // [sp+Ch] [bp-10h]
  int v14; // [sp+10h] [bp-Ch]

  v1 = dword_A0D68;
  v11 = dword_A0D68 + 12917;
  v13 = dword_A0D68 + 12933;
  v14 = -12917 - dword_A0D68;
  do
  {
    v2 = v14 + v11;
    v3 = *(unsigned __int8 *)++v11;
    if ( v3 )
    {
      result = 0;
      v5 = 0;
      v12 = 2 * v2;
      v6 = v1 + 97 * v2;
      v7 = v3;
      do
      {
        v8 = result + v5;
        v9 = v6 + result + v5;
        v10 = (_WORD *)(v1 + 8 * (78 * v2 + v5 + 158));
        if ( v5 == 6 * (v5 / 6) )
        {
          ++result;
          *(_BYTE *)(v9 + 11254) = 32;
          v8 = result + v5;
        }
        ++v5;
        *(_BYTE *)(v6 + v8 + 11254) = 111;
        v10[3] = 0;
        v10[4] = 0;
        v10[5] = 0;
        v10[6] = 0;
      }
      while ( v5 != v7 );
      v4 = result + v5;
    }
    else
    {
      v4 = 0;
      v12 = 2 * v2;
    }
    *(_BYTE *)(v1 + v2 + 32 * (v12 + v2) + v4 + 11254) = 0;
  }
  while ( v11 != v13 );
  return result;
}
