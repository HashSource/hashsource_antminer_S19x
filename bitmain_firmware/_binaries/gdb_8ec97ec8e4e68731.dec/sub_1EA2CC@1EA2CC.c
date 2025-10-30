int __fastcall sub_1EA2CC(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v9; // r0
  int v10; // r0
  int v11; // r7
  int v12; // r4
  int v13; // r0
  int v14; // r4
  char *v15; // r5
  int v16; // r0
  char *v17; // r1
  int v18; // r6
  int v19; // r5
  int v20; // r3
  int result; // r0
  char *v22; // r4
  char *v23; // r4
  int v24; // r0
  char *v25; // r12
  char *v26; // r10
  char *v27; // r5
  int v28; // r3
  char *v29; // r0
  char *v30; // r0
  char *v31; // r5
  int v32; // r3
  char *v33; // r0
  char *endptr; // [sp+Ch] [bp-4h] BYREF

  v9 = sub_16F654(a1);
  v10 = ((int (__fastcall *)(int))loc_1E2770)(v9);
  v11 = dword_488C94;
  v12 = *(_DWORD *)dword_488C94;
  v13 = sub_1E2890(v10);
  v14 = v12 + v13;
  if ( a2 )
  {
    sub_1E2A9C(v13);
    v25 = *(char **)v11;
    strcpy(*(char **)v11, "QTFrame:");
    v26 = v25 + 8;
    switch ( a2 )
    {
      case 1:
        v30 = sub_989F0(a4, 0, 0, (unsigned __int8)aQtframe[8]);
        sub_93170(v26, v14 - (_DWORD)v26, "pc:%s", v30);
        break;
      case 2:
        sub_93170(v25 + 8, v14 - (_DWORD)v26, "tdp:%x", a3);
        break;
      case 3:
        v27 = sub_989F0(a4, 0, 0, (unsigned __int8)aQtframe[8]);
        v29 = sub_989F0(a5, 0, 0, v28);
        sub_93170(v26, v14 - (_DWORD)v26, "range:%s:%s", v27, v29);
        break;
      case 4:
        v31 = sub_989F0(a4, 0, 0, (unsigned __int8)aQtframe[8]);
        v33 = sub_989F0(a5, 0, 0, v32);
        sub_93170(v26, v14 - (_DWORD)v26, "outside:%s:%s", v31, v33);
        break;
      default:
        sub_946E0("Unknown trace find type %d", a2);
    }
  }
  else
  {
    v15 = *(char **)v11;
    strcpy(*(char **)v11, "QTFrame:");
    sub_93170(v15 + 8, v14 - (_DWORD)(v15 + 8), "%x", a3);
  }
  v16 = sub_1E7DEC(*(const char **)v11);
  endptr = sub_1E98E8(v16);
  v17 = endptr;
  if ( !*endptr )
    sub_946E0("Target does not support this command.", endptr);
  v18 = -1;
  v19 = -1;
  do
  {
    v20 = (unsigned __int8)*v17;
    if ( !*v17 )
      break;
    switch ( v20 )
    {
      case 'O':
        if ( v17[1] != 75 || v17[2] )
LABEL_10:
          sub_946E0("Bogus reply from target: %s", v17);
        v17 += 2;
        endptr = v17;
        break;
      case 'T':
        v23 = v17 + 1;
        endptr = v17 + 1;
        v24 = strtol(v17 + 1, &endptr, 16);
        v17 = endptr;
        v18 = v24;
        if ( v23 == endptr )
          sub_946E0("Unable to parse tracepoint number");
        break;
      case 'F':
        v22 = v17 + 1;
        endptr = v17 + 1;
        result = strtol(v17 + 1, &endptr, 16);
        v17 = endptr;
        v19 = result;
        if ( v22 == endptr )
          sub_946E0("Unable to parse trace frame number");
        if ( result == -1 )
          return result;
        break;
      default:
        goto LABEL_10;
    }
  }
  while ( v17 );
  result = v19;
  if ( a6 )
    *a6 = v18;
  *(_DWORD *)(v11 + 84) = v19;
  return result;
}
