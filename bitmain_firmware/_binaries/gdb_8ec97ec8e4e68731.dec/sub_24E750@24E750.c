void __fastcall sub_24E750(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  int v11; // r0
  unsigned int v12; // r12
  unsigned int v13; // r7
  int (__fastcall ***v14)(int, int); // r2
  unsigned int v15; // r9
  const char *v16; // r4
  const char *v17; // r0
  unsigned int v18; // r8
  const char *v19; // r9
  const char *v20; // r0
  int v21; // r0
  void **v22; // r2
  int v23; // r6
  int v24; // r3
  int v25; // r4
  unsigned int v26; // r8
  const char *v27; // r4
  const char *v28; // r0
  const char *v29; // r1
  const char *v30; // r1
  const char *v31; // r5
  char *v32; // r0
  unsigned int v33; // r8
  const char *v34; // r1
  const char *v35; // r1
  void **v36; // r4
  void **v37; // r4
  const char *v38; // r1
  int v39; // r0
  void **v40; // [sp+8h] [bp-Ch] BYREF
  void **v41; // [sp+Ch] [bp-8h]

  v11 = sub_171258(*(_DWORD **)(a2 + 24));
  v12 = *(unsigned __int8 *)(a2 + 32);
  v13 = *(_DWORD *)(v11 + 20);
  v14 = (int (__fastcall ***)(int, int))((char *)off_46DBB8 + 16 * (v12 >> 3));
  switch ( (unsigned int)*v14 )
  {
    case 1u:
      if ( dword_46D448 )
        v31 = (const char *)sub_21B3C4(a2);
      else
        v31 = *(const char **)a2;
      v32 = sub_988AC(*(_QWORD *)(a2 + 8));
      sub_259F10("constant %s (value %s) will not be collected.\n", v31, v32);
      break;
    case 2u:
      v18 = *(_DWORD *)(a2 + 8);
      if ( dword_48A514 )
      {
        if ( dword_46D448 )
          v19 = (const char *)sub_21B3C4(a2);
        else
          v19 = *(const char **)a2;
        v20 = (const char *)sub_25AC8C(a3, v18);
        sub_259F10("LOC_STATIC %s: collect %ld bytes at %s.\n", v19, v13, v20);
      }
      if ( **(_BYTE **)(*(_DWORD *)(a2 + 24) + 24) == 3 )
        goto LABEL_15;
      sub_24E048(a1, a3, 0xFFFFFFFF, v18, v13);
      break;
    case 3u:
      v33 = (*v14[3])(a2, a3);
      if ( dword_48A514 )
      {
        if ( dword_46D448 )
          v34 = (const char *)sub_21B3C4(a2);
        else
          v34 = *(const char **)a2;
        sub_259F10("LOC_REG[parm] %s: ", v34);
      }
      sub_24A69C(a1, v33);
      if ( **(_BYTE **)(*(_DWORD *)(a2 + 24) + 24) == 9
        && ((int (__fastcall *)(int, unsigned int))loc_1DD420)(a3, v33) < v13 )
      {
        sub_24A69C(a1, v33 + 1);
      }
      break;
    case 4u:
    case 7u:
      v15 = a5 + *(_DWORD *)(a2 + 8);
      if ( dword_48A514 )
      {
        if ( dword_46D448 )
          v16 = (const char *)sub_21B3C4(a2);
        else
          v16 = *(const char **)a2;
        v17 = (const char *)sub_25AC8C(a3, v15);
        sub_259F10("LOC_LOCAL %s: Collect %ld bytes at offset %s from frame ptr reg %d\n", v16, v13, v17, a4);
      }
      sub_24E048(a1, a3, a4, v15, v13);
      break;
    case 5u:
      sub_259F10("Sorry, don't know how to do LOC_REF_ARG yet.\n", v12 >> 3, v14);
      if ( dword_46D448 )
        v30 = (const char *)sub_21B3C4(a2);
      else
        v30 = *(const char **)a2;
      sub_259F10("       (will not collect %s)\n", v30);
      break;
    case 6u:
      v26 = *(_DWORD *)(a2 + 8);
      if ( dword_48A514 )
      {
        if ( dword_46D448 )
          v27 = (const char *)sub_21B3C4(a2);
        else
          v27 = *(const char **)a2;
        v28 = (const char *)sub_25AC8C(a3, 0);
        sub_259F10("LOC_REGPARM_ADDR %s: Collect %ld bytes at offset %s from reg %d\n", v27, v13, v28, v26);
      }
      sub_24E048(a1, a3, v26, 0, v13);
      break;
    case 0xCu:
    case 0xEu:
LABEL_15:
      sub_BFD08(&v40, a6, a3, a2, a7);
      if ( v40 )
      {
        sub_C11E8(v40);
        sub_248640(v40);
        v22 = v40;
        if ( (int)v40[10] > 0 )
        {
          v23 = 0;
          do
          {
            v21 = sub_258BD4(v21);
            v22 = v40;
            v24 = *((unsigned __int8 *)v40[11] + v23);
            if ( *((_BYTE *)v40[11] + v23) )
            {
              v25 = 0;
              while ( 1 )
              {
                if ( ((v24 >> v25) & 1) != 0 )
                {
                  v21 = sub_24A69C(a1, v25 + 8 * v23);
                  v22 = v40;
                }
                if ( ++v25 == 8 )
                  break;
                v24 = *((unsigned __int8 *)v22[11] + v23);
              }
            }
            ++v23;
          }
          while ( (int)v22[10] > v23 );
        }
        v41 = v22;
        v40 = 0;
        sub_25062C(a1 + 44);
        v36 = v41;
        if ( v41 )
        {
          sub_C0960((int)v41);
          sub_33AC04(v36);
        }
      }
      else
      {
        if ( dword_46D448 )
          v38 = (const char *)sub_21B3C4(a2);
        else
          v38 = *(const char **)a2;
        sub_259F10("%s has been optimized out of existence.\n", v38);
      }
      v37 = v40;
      if ( v40 )
      {
        sub_C0960((int)v40);
        sub_33AC04(v37);
      }
      break;
    case 0xDu:
      if ( dword_46D448 )
        v29 = (const char *)sub_21B3C4(a2);
      else
        v29 = *(const char **)a2;
      sub_259F10("%s has been optimized out of existence.\n", v29);
      break;
    default:
      if ( dword_46D448 )
      {
        v39 = sub_21B3C4(a2);
        v12 = *(unsigned __int8 *)(a2 + 32);
        v35 = (const char *)v39;
      }
      else
      {
        v35 = *(const char **)a2;
      }
      sub_259F10("%s: don't know symbol class %d\n", v35, *((_DWORD *)off_46DBB8 + 4 * (v12 >> 3)));
      break;
  }
}
