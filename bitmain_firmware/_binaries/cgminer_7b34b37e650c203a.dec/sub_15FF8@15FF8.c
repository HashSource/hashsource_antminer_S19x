bool __fastcall sub_15FF8(const struct sockaddr *a1, const char **a2, _BYTE *a3)
{
  char *v6; // r0
  int v7; // r7
  int v8; // r6
  unsigned __int8 *v9; // r0
  int v10; // r2
  int v11; // r1
  int v12; // r3
  int v13; // t1
  int v14; // lr
  int v15; // t1
  int v16; // t1
  int v18; // r5
  _DWORD buf[4]; // [sp+10h] [bp-34h] BYREF
  char s[36]; // [sp+20h] [bp-24h] BYREF

  v6 = (char *)malloc(0x2Eu);
  *a2 = v6;
  getnameinfo(a1, 0x80u, v6, 0x2Eu, 0, 0, 1u);
  if ( a1->sa_family == 2 )
  {
    sprintf(s, "::ffff:%s", *a2);
    inet_pton(10, s, buf);
  }
  else
  {
    inet_pton(10, *a2, buf);
  }
  *a3 = (*_ctype_toupper_loc())[82];
  if ( dword_6ACC8 )
  {
    if ( dword_68A84 > 0 )
    {
      v7 = 0;
      v8 = dword_68A80 + 15;
      while ( 2 )
      {
        v9 = (unsigned __int8 *)buf;
        v10 = v8 - 16;
        v11 = v8;
        while ( 1 )
        {
          v13 = *v9++;
          v12 = v13;
          v15 = *(unsigned __int8 *)++v11;
          v14 = v15;
          v16 = *(unsigned __int8 *)++v10;
          if ( v16 != (v12 & v14) )
            break;
          if ( v10 == v8 )
          {
            v18 = 1;
            *a3 = *(_BYTE *)(v8 + 17);
            return v18;
          }
        }
        ++v7;
        v8 += 36;
        if ( v7 != dword_68A84 )
          continue;
        break;
      }
    }
    return 0;
  }
  else
  {
    v18 = (unsigned __int8)byte_767BC;
    if ( !byte_767BC )
    {
      if ( !strcmp(*a2, "127.0.0.1") )
      {
        return 1;
      }
      else if ( !buf[0] && !buf[1] && !buf[2] )
      {
        return buf[3] == 0x1000000;
      }
    }
    return v18;
  }
}
