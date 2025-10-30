int __fastcall sub_146C4(int a1)
{
  int v1; // r11
  char *v2; // r7
  int v3; // r9
  unsigned int v5; // r5
  int v6; // r4
  const char *v8; // r4
  char v9; // [sp+15h] [bp-807h] BYREF
  char v10; // [sp+16h] [bp-806h] BYREF
  unsigned __int8 v11; // [sp+17h] [bp-805h] BYREF
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v1 = (unsigned __int8)a1;
  v2 = (char *)&unk_9F80C + 108 * a1;
  v3 = 0;
  v9 = 0;
  while ( 2 )
  {
    v5 = (unsigned __int8)v2[13];
    v6 = 4;
    v10 = 4;
    sub_1A954(v1, v5, 0, 1);
    sub_1A958(v1, v5, 0);
    while ( 1 )
    {
      v11 = 0;
      sub_14528(a1, v5, 254, 0, &v11);
      if ( v11 == 26 )
      {
        v8 = "NCT218";
        goto LABEL_10;
      }
      if ( v11 == 85 )
        break;
      if ( !--v6 )
      {
        if ( (unsigned int)dword_9E31C > 3 )
        {
          snprintf(
            s,
            0x800u,
            "Wrong temp sensor type, chain = %d, sensor = %d, type = 0x%x, retry.\n",
            a1,
            (unsigned __int8)(v5 / 3),
            v11);
          sub_47AB4(3, s, 0);
        }
        *(_BYTE *)(dword_A0D68 + a1 + 1112) = 0;
        return -1;
      }
    }
    v8 = "TMP451";
LABEL_10:
    *((_DWORD *)v2 + 5) = v8;
    *((_DWORD *)v2 + 8) = v8;
    ++v3;
    v9 = 0;
    sub_14528(a1, v5, 9, 1, &v10);
    sub_14528(a1, v5, 17, 1, &v9);
    v2 += 24;
    if ( v3 != 4 )
      continue;
    break;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "chain %d temp sensor %s\n", a1, v8);
    sub_47AB4(3, s, 0);
  }
  return 0;
}
