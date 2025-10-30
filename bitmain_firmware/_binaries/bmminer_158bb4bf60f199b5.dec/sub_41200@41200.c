int __fastcall sub_41200(int a1, int a2, _BYTE *a3, int a4)
{
  int v7; // r2
  int v8; // r3
  int v9; // r6
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  const char *v14; // r0
  const char *v15; // r0
  char **v16; // r0
  int result; // r0
  const char *v18; // r0
  const char *v19; // r0
  const char *v20; // r0
  const char *v21; // r0
  const char *v22; // r0
  const char *v23; // r0
  char **v24; // r1
  char *v25; // r3
  int v26; // r2

  if ( a3 )
  {
    v7 = LOBYTE((*_ctype_tolower_loc())[(unsigned __int8)*a3]);
    *a3 = v7;
    switch ( v7 )
    {
      case 'd':
        v8 = (unsigned __int8)byte_1AECC5 ^ 1;
        byte_1AECC5 ^= 1u;
        byte_1AECC4 = v8;
        if ( v8 )
          goto LABEL_4;
        break;
      case 'n':
        byte_1AECC4 = 0;
        byte_1AECC5 = 0;
        byte_242EF8 = 0;
        byte_242F18 = 0;
        byte_242F08 = 0;
        byte_24401C = 0;
        break;
      case 'p':
        byte_242F08 ^= 1u;
        byte_1AECC4 = byte_242F08;
        break;
      case 'q':
        byte_242EF8 ^= 1u;
        break;
      case 'r':
        v25 = &byte_242F18;
        goto LABEL_15;
      case 's':
        byte_24511C = 1;
        break;
      case 'v':
        v25 = &byte_1AECC4;
LABEL_15:
        v26 = (unsigned __int8)*v25 ^ 1;
        *v25 = v26;
        if ( v26 )
LABEL_4:
          byte_242EF8 = 0;
        break;
      case 'w':
        byte_24401C ^= 1u;
        break;
      default:
        break;
    }
  }
  sub_3F65C((unsigned int *)a1, 79, 0, 0, a4);
  if ( a4 )
  {
    v9 = sub_3C770((unsigned int *)a1, ",\"DEBUG\":[");
    v10 = sub_3F3D8(0, "Silent", 14, &byte_24511C, 0);
    v11 = sub_3F3D8((int)v10, "Quiet", 14, &byte_242EF8, 0);
    v12 = sub_3F3D8((int)v11, "Verbose", 14, &byte_1AECC4, 0);
    v13 = sub_3F3D8((int)v12, "Debug", 14, &byte_1AECC5, 0);
    v14 = sub_3F3D8((int)v13, "RPCProto", 14, &byte_242F18, 0);
    v15 = sub_3F3D8((int)v14, "PerDevice", 14, &byte_242F08, 0);
    v16 = (char **)sub_3F3D8((int)v15, "WorkTime", 14, &byte_24401C, 0);
    result = sub_3E88C((unsigned int *)a1, v16, 1, 0);
    if ( v9 )
      *(_BYTE *)(a1 + 13) = 1;
  }
  else
  {
    sub_3C770((unsigned int *)a1, "DEBUG,");
    v18 = sub_3F3D8(0, "Silent", 14, &byte_24511C, 0);
    v19 = sub_3F3D8((int)v18, "Quiet", 14, &byte_242EF8, 0);
    v20 = sub_3F3D8((int)v19, "Verbose", 14, &byte_1AECC4, 0);
    v21 = sub_3F3D8((int)v20, "Debug", 14, &byte_1AECC5, 0);
    v22 = sub_3F3D8((int)v21, "RPCProto", 14, &byte_242F18, 0);
    v23 = sub_3F3D8((int)v22, "PerDevice", 14, &byte_242F08, 0);
    v24 = (char **)sub_3F3D8((int)v23, "WorkTime", 14, &byte_24401C, 0);
    return sub_3E88C((unsigned int *)a1, v24, 0, 0);
  }
  return result;
}
