int __fastcall sub_122498(int a1, unsigned __int8 *a2)
{
  int v2; // r5
  unsigned __int8 *v3; // r4
  int v4; // r3
  int v5; // r0
  int v6; // r4
  int v8; // r4
  int v9; // [sp+Ch] [bp-4h] BYREF

  v2 = 0;
  v3 = a2;
  v9 = 0;
  if ( a2 )
  {
    v9 = sub_B822C();
    if ( v9 )
    {
      v4 = *v3;
      if ( v4 == 45 )
      {
        v4 = v3[1];
        v2 = 1;
        ++v3;
      }
      if ( v4 == 48 && (v3[1] & 0xDF) == 0x58 )
      {
        v3 += 2;
        v5 = sub_135A8C(&v9, v3);
      }
      else
      {
        v5 = sub_135BB0(&v9, v3);
      }
      if ( !v5 || v3[v5] )
      {
        sub_B895C(v9);
        sub_D0048(34, 108, 100, (int)"crypto/x509v3/v3_utl.c", 229);
        return 0;
      }
      else
      {
        if ( !v2 || sub_B85B0(v9) )
        {
          v6 = sub_126F3C(v9, 0);
          sub_B895C(v9);
          if ( v6 )
            return v6;
        }
        else
        {
          v8 = sub_126F3C(v9, 0);
          sub_B895C(v9);
          if ( v8 )
          {
            *(_DWORD *)(v8 + 4) |= 0x100u;
            return v8;
          }
        }
        sub_D0048(34, 108, 101, (int)"crypto/x509v3/v3_utl.c", 240);
        return 0;
      }
    }
    else
    {
      sub_D0048(34, 108, 65, (int)"crypto/x509v3/v3_utl.c", 207);
      return 0;
    }
  }
  else
  {
    sub_D0048(34, 108, 109, (int)"crypto/x509v3/v3_utl.c", 202);
    return 0;
  }
}
