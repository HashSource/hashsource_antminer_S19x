bool __fastcall sub_172ABC(_DWORD *a1, int a2)
{
  int *v4; // r0
  int *v5; // r9
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r8
  const char *v9; // r0
  int v10; // r2
  _DWORD v12[1025]; // [sp+8h] [bp-1004h] BYREF

  v4 = sub_1718AC(a1);
  v5 = v4;
  if ( v4 )
  {
    v12[2] = 0;
    v12[0] = "content-type";
    v12[1] = 0;
    v6 = sub_10BC4C((int)v4, (int)v12);
    v7 = sub_10C01C(v5, v6);
    v8 = v7;
    if ( v7 && (v9 = *(const char **)(v7 + 4)) != 0 )
    {
      if ( !strcmp(v9, "text/plain") )
      {
        sub_10BFDC((int)v5, sub_171570);
        while ( 1 )
        {
          v10 = sub_B6740((int)a1, (int)v12, 4096);
          if ( v10 <= 0 )
            break;
          sub_B69CC(a2, (int)v12, v10);
        }
        return !v10;
      }
      else
      {
        sub_D0048(13, 213, 205, (int)"crypto/asn1/asn_mime.c", 551);
        sub_D1240(2, "type: ", *(_DWORD *)(v8 + 4));
        sub_10BFDC((int)v5, sub_171570);
        return 0;
      }
    }
    else
    {
      sub_D0048(13, 213, 206, (int)"crypto/asn1/asn_mime.c", 546);
      sub_10BFDC((int)v5, sub_171570);
      return 0;
    }
  }
  else
  {
    sub_D0048(13, 213, 207, (int)"crypto/asn1/asn_mime.c", 541);
    return 0;
  }
}
