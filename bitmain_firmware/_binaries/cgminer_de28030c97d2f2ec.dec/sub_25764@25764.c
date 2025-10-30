int __fastcall sub_25764(_DWORD *a1, int a2)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  char v8[12]; // [sp+10h] [bp-91Ch] BYREF
  _DWORD v9[23]; // [sp+810h] [bp-11Ch] BYREF
  char v10[160]; // [sp+86Ch] [bp-C0h] BYREF
  _DWORD *v11; // [sp+90Ch] [bp-20h]
  _DWORD *v12; // [sp+910h] [bp-1Ch]
  _DWORD *v13; // [sp+914h] [bp-18h]
  int v14; // [sp+918h] [bp-14h]
  const char *v15; // [sp+91Ch] [bp-10h]
  char *s1; // [sp+920h] [bp-Ch]
  unsigned __int8 v17; // [sp+927h] [bp-5h]

  v17 = 0;
  v15 = 0;
  v14 = 0;
  v14 = sub_64704(a2, 0, v9);
  if ( v14 )
  {
    v13 = (_DWORD *)sub_65FEC(v14, "result");
    v12 = (_DWORD *)sub_65FEC(v14, "error");
    if ( v13 && *v13 != 7 && (!v12 || *v12 == 7) )
    {
      v2 = sub_6655C(v13);
      for ( s1 = (char *)sub_66698(v2); s1; s1 = (char *)sub_66698(v4) )
      {
        v5 = sub_66788(s1);
        v11 = (_DWORD *)sub_666D4(v5);
        if ( !v11 )
          break;
        if ( !strcasecmp(s1, "version-rolling") && strlen(s1) == 15 )
        {
          if ( !v11 || *v11 != 5 )
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
            {
              snprintf(v8, 0x800u, "Pool %d don't support ab!", *a1);
              sub_1E4EC(5, v8, 0);
            }
            *((_BYTE *)a1 + 660) = 0;
            a1[166] = 1;
            v17 = 1;
            break;
          }
          if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
          {
            snprintf(v8, 0x800u, "POOL %d support ab mode!", *a1);
            sub_1E4EC(5, v8, 0);
          }
        }
        else if ( !strcasecmp(s1, "version-rolling.mask") && strlen(s1) == 20 )
        {
          v15 = (const char *)sub_677D0(v11);
          sub_253D0((int)a1, v15);
          v17 = 1;
        }
        else if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
        {
          snprintf(v8, 0x800u, "JSON-RPC unexpected mining.configure value: %s", s1);
          sub_1E4EC(3, v8, 0);
        }
        v3 = sub_66788(s1);
        v4 = sub_66628(v13, v3);
      }
    }
  }
  else if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
  {
    snprintf(v8, 0x800u, "JSON decode failed(%d): %s", v9[0], v10);
    sub_1E4EC(6, v8, 0);
  }
  sub_1F948(v14);
  return v17;
}
