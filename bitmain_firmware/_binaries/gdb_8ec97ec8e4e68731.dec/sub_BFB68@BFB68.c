int __fastcall sub_BFB68(int a1, int **a2, int a3, int a4, int a5)
{
  int *v5; // r12
  int v8; // lr
  __int64 v10; // r0
  __int64 v11; // r0
  int v12; // r5
  const char **v13; // r0
  const char *v14; // r1
  int v16; // [sp+4h] [bp-8h] BYREF

  v5 = *a2;
  v8 = **a2;
  if ( (v8 & 0xFFFFFFFD) == 0x28 )
  {
    if ( v8 == 40 )
    {
      sub_BD334(a3, a4, v5[8]);
      if ( *(_BYTE *)(a4 + 8) )
      {
        v13 = (const char **)(*a2)[8];
        if ( dword_46D448 )
          v14 = (const char *)sub_21B3C4(v13);
        else
          v14 = *v13;
        sub_946E0("`%s' has been optimized out, cannot use", v14);
      }
    }
    else
    {
      v10 = sub_1C394C(v5[8], v5[4], &v16);
      *(_DWORD *)(a4 + 4) = v10;
      *(_BYTE *)(a4 + 8) = 0;
      sub_C0B5C(a3, HIDWORD(v10), v16, 0);
      *(_DWORD *)a4 = 1;
    }
    if ( **(_BYTE **)(*(_DWORD *)(a4 + 4) + 24) == 14 )
      *(_DWORD *)(a4 + 4) = a5;
    *a2 += 16;
  }
  else
  {
    sub_BE2C0(a1, a2, a3, a4);
  }
  sub_BE0D4(a3, (_DWORD *)a4);
  v11 = sub_171258(a5);
  v12 = v11;
  switch ( **(_BYTE **)(v11 + 24) )
  {
    case 1:
    case 5:
    case 0xA:
    case 0x12:
    case 0x13:
    case 0x15:
      break;
    case 2:
    case 3:
    case 4:
    case 7:
      sub_946E0("Invalid type cast: intended type must be scalar.", HIDWORD(v11));
    case 8:
      LODWORD(v11) = sub_BCF48(a3, *(_DWORD *)(*(_DWORD *)(a4 + 4) + 20), (int *)(*(_DWORD *)(a4 + 4) + 24), v11);
      break;
    default:
      sub_946E0("Casts to requested type are not yet implemented.", HIDWORD(v11));
  }
  *(_DWORD *)(a4 + 4) = v12;
  return v11;
}
