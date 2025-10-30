int __fastcall sub_14D6D0(int *a1, int *a2, int a3)
{
  int v4; // r4
  int *v7; // r6
  char *v8; // r4
  int result; // r0
  int v10; // r9
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r4
  int v15; // r1
  int v16; // r0
  int v17; // r4
  int v18; // r4
  int v19; // r0
  unsigned __int8 *v20; // r2
  int v21; // r0
  int v22; // r0
  int v23; // r3
  bool v24; // zf

  v4 = *a2;
  v7 = &a1[4 * *a2];
  switch ( v7[4] )
  {
    case '(':
      v10 = v7[12];
      v11 = *(_DWORD *)(v10 + 24);
      if ( (unsigned int)**(unsigned __int8 **)(v11 + 24) - 18 <= 1 )
        goto LABEL_20;
      *a2 = v4 + 4;
      if ( a3 == 2 )
      {
        v22 = sub_1700C0(v11);
        v23 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v10 + 32) >> 3));
        v24 = v23 == 11;
        if ( v23 != 11 )
          v24 = (v23 & 0xFFFFFFFD) == 1;
        if ( v24 )
          sub_946E0("Attempt to take address of register or constant.", 1);
        return sub_260DBC(v22);
      }
      return sub_26138C(v10, v7[8]);
    case '*':
      *a2 = v4 + 4;
      v12 = sub_14D68C(a3, v7[8], v7[12]);
      if ( a3 == 2 )
        goto LABEL_22;
      return sub_2616BC(v12);
    case '8':
      *a2 = v4 + 3;
      v13 = v7[8];
      goto LABEL_10;
    case '9':
      *a2 = v4 + 1;
      v16 = sub_14C9EC(0, a1, a2, 2);
      v13 = sub_26BC70(v16);
LABEL_10:
      v14 = sub_1700C0(v13);
      v15 = sub_14C9EC(0, a1, a2, a3);
      return sub_2647C8(v14, v15);
    case '=':
      *a2 = v4 + 1;
      v17 = sub_14C9EC(0, a1, a2, a3);
      if ( !sub_25CFA0(61, v17) )
        return sub_26EAAC(v17);
      v18 = ((int (__fastcall *)(int, int, int))loc_25D588)(v17, 61, a3);
LABEL_14:
      v12 = v18;
      if ( a3 != 2 )
        return sub_2616BC(v12);
      v19 = sub_26BC70(v18);
      v20 = *(unsigned __int8 **)(sub_171258(v19) + 24);
      if ( (unsigned int)*v20 - 18 > 1 )
      {
        if ( *(_DWORD *)nullsub_31(v18) != 1 && !sub_261524(v18) )
          sub_946E0("Attempt to take address of value not located in memory.");
        v12 = v18;
LABEL_22:
        v21 = sub_26BC70(v12);
      }
      else
      {
        v21 = *((_DWORD *)v20 + 5);
      }
      v22 = sub_1700C0(v21);
      return sub_260DBC(v22);
    case 'V':
      v8 = (char *)&a1[4 * v4 + 16];
      *a2 += 5 + (((unsigned int)sub_26725C(v7[12], v7[13]) + 16) >> 4);
      result = sub_264340(v7[8], v8, 0, 1, a3);
      if ( !result )
        sub_946E0("There is no field named %s", v8);
      return result;
    default:
LABEL_20:
      v18 = sub_14C9EC(0, a1, a2, a3);
      goto LABEL_14;
  }
}
