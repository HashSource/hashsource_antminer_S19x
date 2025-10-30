int __fastcall sub_F2E30(int a1, int a2, int a3)
{
  bool v3; // zf
  int v5; // r5
  int v6; // r6
  int v7; // r3
  int result; // r0

  v3 = a2 == 0;
  if ( !a2 )
    v3 = a3 == 0;
  if ( v3 )
  {
    v5 = dword_21FB4C;
    v6 = dword_6E1AB4;
  }
  else
  {
    v5 = a2;
    v6 = a3;
  }
  v7 = *(_DWORD *)(a1 + 12);
  if ( v7 && (v5 != v7 || v6 != *(unsigned __int16 *)(a1 + 20)) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 240) + 12))(a1);
    sub_F408C(*(_DWORD *)(a1 + 28));
    *(_DWORD *)(a1 + 28) = 0;
  }
  *(_WORD *)(a1 + 20) = v6;
  *(_DWORD *)(a1 + 12) = v5;
  *(_DWORD *)(a1 + 92) = 0;
  if ( v5 )
  {
    if ( v5 < 0 || (unsigned int)(v5 - 904) > 2 )
    {
      *(_DWORD *)(a1 + 12) = 0;
      *(_WORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 240) = 0;
      sub_D0048(36, 104, 120, (int)"crypto/rand/drbg_lib.c", 128);
      return 0;
    }
    else
    {
      result = sub_1647C0(a1);
      if ( !result )
      {
        *(_DWORD *)(a1 + 92) = 2;
        sub_D0048(36, 104, 107, (int)"crypto/rand/drbg_lib.c", 143);
        return 0;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 240) = 0;
    return 1;
  }
  return result;
}
