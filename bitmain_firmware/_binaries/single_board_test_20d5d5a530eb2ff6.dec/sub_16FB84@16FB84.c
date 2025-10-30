void **__fastcall sub_16FB84(int a1, int *a2, void **a3)
{
  int v3; // r3
  _DWORD *v5; // r3
  unsigned __int8 *v6; // r8
  int v7; // lr
  int v8; // r3
  unsigned __int8 *v9; // r5
  unsigned __int8 *v10; // r8
  void **v11; // [sp+14h] [bp-10Ch] BYREF
  char v12[8]; // [sp+18h] [bp-108h] BYREF
  char v13[256]; // [sp+20h] [bp-100h] BYREF

  v3 = *a2;
  v11 = a3;
  switch ( v3 )
  {
    case 0:
      if ( sub_121F9C("othername", "<unsupported>", &v11) )
        return v11;
      return 0;
    case 1:
      if ( !sub_12225C("email", *(void **)(a2[1] + 8), *(_DWORD *)a2[1], &v11) )
        return 0;
      return v11;
    case 2:
      if ( !sub_12225C("DNS", *(void **)(a2[1] + 8), *(_DWORD *)a2[1], &v11) )
        return 0;
      return v11;
    case 3:
      if ( !sub_121F9C("X400Name", "<unsupported>", &v11) )
        return 0;
      return v11;
    case 4:
      if ( sub_10F99C((int *)a2[1], v13, 0x100u) && sub_121F9C("DirName", v13, &v11) )
        return v11;
      return 0;
    case 5:
      if ( !sub_121F9C("EdiPartyName", "<unsupported>", &v11) )
        return 0;
      return v11;
    case 6:
      if ( !sub_12225C("URI", *(void **)(a2[1] + 8), *(_DWORD *)a2[1], &v11) )
        return 0;
      return v11;
    case 7:
      v5 = (_DWORD *)a2[1];
      v6 = (unsigned __int8 *)v5[2];
      if ( *v5 == 4 )
      {
        sub_B5560(v13, 0x100u, "%d.%d.%d.%d", *v6, v6[1], v6[2], v6[3]);
        goto LABEL_25;
      }
      if ( *v5 == 16 )
      {
        v13[0] = 0;
        v7 = *v6;
        v8 = v6[1];
        v9 = v6 + 4;
        v10 = v6 + 18;
        sub_B5560(v12, 5u, "%X", v8 | (v7 << 8));
        strcat(v13, v12);
        do
        {
          v9 += 2;
          *(_WORD *)&v13[strlen(v13)] = 58;
          sub_B5560(v12, 5u, "%X", *(v9 - 3) | (*(v9 - 4) << 8));
          strcat(v13, v12);
        }
        while ( v9 != v10 );
LABEL_25:
        if ( !sub_121F9C("IP Address", v13, &v11) )
          return 0;
        return v11;
      }
      if ( sub_121F9C("IP Address", "<invalid>", &v11) )
        return v11;
      return 0;
    case 8:
      sub_127D0C(v13, 256, a2[1]);
      if ( !sub_121F9C("Registered ID", v13, &v11) )
        return 0;
      return v11;
    default:
      return v11;
  }
}
