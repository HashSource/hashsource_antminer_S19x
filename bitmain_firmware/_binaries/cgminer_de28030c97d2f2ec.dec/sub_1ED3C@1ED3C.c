bool __fastcall sub_1ED3C(_DWORD *a1, int a2, int a3)
{
  double v3; // d0
  char v9[8]; // [sp+1Ch] [bp-818h] BYREF
  _BYTE src[8]; // [sp+81Ch] [bp-18h] BYREF
  int v11; // [sp+824h] [bp-10h]
  int i; // [sp+828h] [bp-Ch]
  char v13; // [sp+82Fh] [bp-5h]

  v11 = a1[6];
  v13 = 1;
  if ( !v11 )
    return 0;
  sub_22308(src);
  ++*(_QWORD *)(v11 + 16);
  sub_1EB0C(*(_DWORD *)(*(_DWORD *)(v11 + 4) + 8), "noncedup.c", "isdupnonce", 70);
  i = *(_DWORD *)(*(_DWORD *)(v11 + 8) + 16);
  while ( v13 && i )
  {
    if ( **(_DWORD **)(i + 12) == *(_DWORD *)(a2 + 340) && *(_DWORD *)(*(_DWORD *)(i + 12) + 4) == a3 )
    {
      v13 = 0;
      if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
      {
        snprintf(v9, 0x800u, "%s%d: Duplicate nonce %08x", *(const char **)(a1[1] + 8), a1[2], a3);
        sub_1E4EC(4, v9, 0);
      }
    }
    else
    {
      i = *(_DWORD *)(i + 4);
    }
  }
  if ( v13 )
  {
    i = sub_1CF74(*(_DWORD *)(v11 + 4), "noncedup.c", "isdupnonce", 81);
    **(_DWORD **)(i + 12) = *(_DWORD *)(a2 + 340);
    *(_DWORD *)(*(_DWORD *)(i + 12) + 4) = a3;
    memcpy((void *)(*(_DWORD *)(i + 12) + 8), src, 8u);
    sub_1D258(*(_DWORD *)(v11 + 8), i, "noncedup.c", "isdupnonce", 85);
  }
  for ( i = *(_DWORD *)(*(_DWORD *)(v11 + 8) + 16); i; i = *(_DWORD *)(*(_DWORD *)(v11 + 8) + 16) )
  {
    sub_226B0(*(_DWORD *)(i + 12) + 8, src);
    if ( v3 <= (double)*(int *)v11 )
      break;
    i = sub_1D0EC(*(_DWORD *)(v11 + 8), "noncedup.c", "isdupnonce", 89);
    sub_1D258(*(_DWORD *)(v11 + 4), i, "noncedup.c", "isdupnonce", 90);
  }
  sub_1EB5C(*(_DWORD *)(*(_DWORD *)(v11 + 4) + 8), "noncedup.c", "isdupnonce", 93);
  if ( v13 != 1 )
    ++*(_QWORD *)(v11 + 24);
  return v13 == 0;
}
