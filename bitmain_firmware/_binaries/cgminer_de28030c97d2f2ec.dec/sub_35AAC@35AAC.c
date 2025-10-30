int __fastcall sub_35AAC(int a1, char a2)
{
  char v6[2048]; // [sp+8h] [bp-81Ch] BYREF
  __time_t v7[2]; // [sp+808h] [bp-1Ch] BYREF
  int v8; // [sp+810h] [bp-14h]
  int v9; // [sp+814h] [bp-10h]
  bool v10; // [sp+81Bh] [bp-9h]
  int v11; // [sp+81Ch] [bp-8h]

  if ( byte_87FB0 || dword_91F78 )
    return 0;
  if ( *(_DWORD *)(a1 + 336) != dword_8808C )
  {
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v6, "Work stale due to block mismatch");
      sub_1E4EC(7, v6, 0);
    }
    return 1;
  }
  if ( *(_DWORD *)(a1 + 276) <= dword_86C2C )
    v11 = dword_86C30;
  else
    v11 = *(_DWORD *)(a1 + 276);
  v9 = *(_DWORD *)(a1 + 260);
  if ( a2 == 1 || !*(_BYTE *)(v9 + 656) )
    goto LABEL_31;
  if ( *(_BYTE *)(v9 + 657) != 1 || *(_BYTE *)(v9 + 659) != 1 )
  {
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v6, "Work stale due to stratum inactive");
      sub_1E4EC(7, v6, 0);
    }
    return 1;
  }
  sub_2E91C(v9 + 212, "cgminer.c", "stale_work", 5152);
  v10 = strcmp(*(const char **)(a1 + 288), *(const char **)(v9 + 688)) == 0;
  sub_2EA38(v9 + 212, "cgminer.c", "stale_work", 5159);
  if ( !v10 )
  {
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      strcpy(v6, "Work stale due to stratum job_id mismatch");
      sub_1E4EC(7, v6, 0);
    }
    return 1;
  }
  else
  {
LABEL_31:
    v8 = (int)(*(double *)(v9 + 448) * 5.0 + 1.0);
    v11 -= v8;
    if ( v11 <= 4 )
      v11 = 5;
    sub_22308(v7);
    if ( v7[0] - *(_DWORD *)(a1 + 264) < v11 )
    {
      if ( !byte_9412D
        || a2 == 1
        || sub_2F984() == v9
        || *(_BYTE *)(a1 + 282) == 1
        || dword_87E6C == 3
        || dword_87E6C == 4 )
      {
        return 0;
      }
      else
      {
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          strcpy(v6, "Work stale due to fail only pool mismatch");
          sub_1E4EC(7, v6, 0);
        }
        return 1;
      }
    }
    else
    {
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        strcpy(v6, "Work stale due to expiry");
        sub_1E4EC(7, v6, 0);
      }
      return 1;
    }
  }
}
