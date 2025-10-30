int __fastcall sub_68464(char a1, int a2, unsigned __int8 a3)
{
  int v4; // r3
  char v9[2048]; // [sp+10h] [bp-864h] BYREF
  unsigned __int8 s[72]; // [sp+810h] [bp-64h] BYREF
  int v11; // [sp+858h] [bp-1Ch] BYREF
  char v12; // [sp+85Ch] [bp-18h]
  char v13; // [sp+85Dh] [bp-17h]
  unsigned __int8 v14; // [sp+85Eh] [bp-16h]
  char v15; // [sp+85Fh] [bp-15h]
  __int16 v16; // [sp+860h] [bp-14h]
  int v17; // [sp+864h] [bp-10h]
  unsigned __int16 i; // [sp+868h] [bp-Ch]
  __int16 v19; // [sp+86Ah] [bp-Ah]
  int v20; // [sp+86Ch] [bp-8h]

  if ( a3 <= 0x40u )
  {
    if ( (a1 & 1) != 0 )
    {
      strcpy(v9, "read data should start from even address\n");
      sub_3B6AC(3, v9, 0, (int)v9);
      return -1;
    }
    else
    {
      v20 = 0;
      v11 = 101231189;
      v16 = 0;
      memset(s, 0, sizeof(s));
      v19 = 0;
      v17 = 6;
      v12 = a1;
      v13 = 0;
      v14 = a3;
      v15 = 0;
      for ( i = 2; i <= 7u; i += 2 )
      {
        v19 += *((unsigned __int8 *)&v11 + i);
        v19 += *((unsigned __int8 *)&v11 + i + 1) << 8;
      }
      v16 = v19;
      if ( sub_61724(dword_536348, (unsigned __int8 *)&v11, 0xAu, s, a3 + 8) )
        return -1;
      for ( i = 0; i < (unsigned int)a3; ++i )
      {
        v4 = v17++;
        *(_BYTE *)(a2 + i) = s[v4];
      }
      return v20;
    }
  }
  else
  {
    strcpy(v9, "read length should less then 64\n");
    sub_3B6AC(3, v9, 0, (int)v9);
    return -1;
  }
}
