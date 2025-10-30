int __fastcall sub_15C998(int a1, _DWORD *a2)
{
  const char *v3; // r1
  int v4; // r4
  _DWORD *v5; // r3
  int v6; // r3
  int v8; // r0
  int v9; // r3
  int v10; // r2
  char *v11; // r0
  char *v12; // r0

  if ( a2 )
  {
    v4 = a1;
    sub_2594B0(a1, "{");
    sub_2594B0(v4, "level=%d", *a2);
    sub_2594B0(v4, (const char *)&word_3D7D40);
    sub_2594B0(v4, "type=");
    v5 = (_DWORD *)a2[4];
    if ( v5 )
    {
      switch ( *v5 )
      {
        case 0:
          sub_2594B0(v4, "NORMAL_FRAME");
          break;
        case 1:
          sub_2594B0(v4, "DUMMY_FRAME");
          break;
        case 2:
          sub_2594B0(v4, "INLINE_FRAME");
          break;
        case 3:
          sub_2594B0(v4, "TAILCALL_FRAME");
          break;
        case 4:
          sub_2594B0(v4, "SIGTRAMP_FRAME");
          break;
        case 5:
          sub_2594B0(v4, "ARCH_FRAME");
          break;
        case 6:
          sub_2594B0(v4, "SENTINEL_FRAME");
          break;
        default:
          sub_2594B0(v4, "<unknown type>");
          break;
      }
    }
    else
    {
      sub_2594B0(v4, "<unknown>");
    }
    sub_2594B0(v4, (const char *)&word_3D7D40);
    sub_2594B0(v4, "unwind=");
    v8 = a2[4];
    if ( v8 )
      sub_25A44C(v8, v4);
    else
      sub_2594B0(v4, "<unknown>");
    sub_2594B0(v4, (const char *)&word_3D7D40);
    sub_2594B0(v4, "pc=");
    v9 = a2[19];
    if ( v9 && (v10 = *(_DWORD *)(v9 + 28)) != 0 )
    {
      switch ( v10 )
      {
        case 1:
          v12 = sub_98B08(*(_DWORD *)(v9 + 32), 0);
          sub_2594B0(v4, "%s", v12);
          break;
        case 2:
          sub_2669C4(v4);
          break;
        case 3:
          sub_2669D0(v4);
          break;
      }
    }
    else
    {
      sub_2594B0(v4, "<unknown>");
    }
    sub_2594B0(v4, (const char *)&word_3D7D40);
    sub_2594B0(v4, (const char *)&off_3A9B2C);
    if ( a2[11] )
      sub_15C6C8(v4, a2[12], a2[13], a2[14], a2[15], a2[16]);
    else
      sub_2594B0(v4, "<unknown>");
    sub_2594B0(v4, (const char *)&word_3D7D40);
    sub_2594B0(v4, "func=");
    v6 = a2[19];
    if ( v6 && *(_DWORD *)(v6 + 40) )
    {
      v11 = sub_98B08(*(_DWORD *)(v6 + 36), 0);
      sub_2594B0(v4, "%s", v11);
    }
    else
    {
      sub_2594B0(v4, "<unknown>");
    }
    v3 = "}";
    a1 = v4;
  }
  else
  {
    v3 = "<NULL frame>";
  }
  return sub_2594B0(a1, v3);
}
