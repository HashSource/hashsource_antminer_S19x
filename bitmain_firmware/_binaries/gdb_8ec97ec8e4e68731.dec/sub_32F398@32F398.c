int __fastcall sub_32F398(int a1, int a2, int *a3)
{
  char v3; // r12
  int v6; // r2
  int v8; // r1
  int v10; // r1
  int v11; // [sp+Ch] [bp-8h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  v11 = 0;
  if ( (v3 & 0x30) != 0 )
  {
    sub_32AC0C(a1, a2, 0, a3, &v11);
  }
  else
  {
    if ( (v3 & 0x40) == 0 )
    {
      v6 = *(unsigned __int16 *)(a2 + 10);
      v8 = *(_DWORD *)a2;
      if ( !v6 && v8 == 1 && (v3 & 0x70) == 0 )
      {
        *(_DWORD *)a1 = 1;
        *(_DWORD *)(a1 + 4) = 0;
        v10 = 2;
        *(_WORD *)(a1 + 10) = 0;
        *(_BYTE *)(a1 + 8) = -64;
        v11 = 2;
        goto LABEL_6;
      }
      sub_329718(a1, v8 + *(_DWORD *)(a2 + 4) - 1);
      return a1;
    }
    sub_32AB6C(a1, a2);
    *(_BYTE *)(a1 + 8) &= ~0x80u;
  }
  v10 = v11;
  if ( v11 )
  {
LABEL_6:
    sub_327DE4(a1, v10, (int)a3);
    return a1;
  }
  return a1;
}
