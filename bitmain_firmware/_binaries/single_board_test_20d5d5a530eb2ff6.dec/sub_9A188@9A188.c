int __fastcall sub_9A188(_DWORD *a1, unsigned __int8 *a2)
{
  unsigned int v3; // r5
  unsigned int v4; // r3
  int v5; // r3
  int v8; // r2
  int v9; // r3

  v3 = *((_DWORD *)a2 + 1);
  if ( v3 < *((_DWORD *)a2 + 4) + *((_DWORD *)a2 + 3) )
    goto LABEL_9;
  v4 = 17740;
  if ( a1[319] > 0x454Cu )
    v4 = a1[319];
  if ( v3 > v4 )
  {
LABEL_9:
    sub_95494(a1, 47, 288, 152, (int)"ssl/statem/statem_dtls.c", 430);
    return 0;
  }
  else
  {
    v5 = a1[32];
    if ( *(_DWORD *)(v5 + 344) )
    {
      if ( v3 == *(_DWORD *)(v5 + 336) )
      {
        return 1;
      }
      else
      {
        sub_95494(a1, 47, 288, 152, (int)"ssl/statem/statem_dtls.c", 456);
        return 0;
      }
    }
    else if ( sub_BAF60(a1[27]) )
    {
      v8 = a1[31];
      v9 = a1[32];
      *(_DWORD *)(v8 + 520) = v3;
      *(_DWORD *)(v9 + 336) = v3;
      *(_DWORD *)(v8 + 524) = *a2;
      *(_BYTE *)(v9 + 332) = *a2;
      *(_WORD *)(a1[32] + 340) = *((_WORD *)a2 + 4);
      return 1;
    }
    else
    {
      sub_95494(a1, 80, 288, 7, (int)"ssl/statem/statem_dtls.c", 441);
      return 0;
    }
  }
}
