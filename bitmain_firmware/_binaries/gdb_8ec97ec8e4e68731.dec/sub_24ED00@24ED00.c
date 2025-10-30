void __fastcall sub_24ED00(int **a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8)
{
  int **v8; // r10
  char *v10; // r0
  int v11; // r0
  int v12; // r7
  int v13; // r0
  int v14; // r6
  unsigned int v15; // r1
  int v16; // r0
  int v17; // r0
  unsigned int v18; // r2
  int v19; // lr
  int v20; // r4
  int v21; // r0
  int v22; // r0
  void **v23; // r2
  int v24; // r6
  int v25; // r3
  int v26; // r4
  void **v27; // r4
  void **v28; // r4
  char *v29; // r0
  unsigned int v30; // r7
  int *v31; // r0
  void **v32; // r3
  void **v33; // r7
  void **v34; // r7
  char *v35; // r3
  unsigned int v36; // r4
  int *v37; // r0
  char **v38; // r0
  int v39; // r3
  int v40; // r0
  void **v41; // r2
  int v42; // r6
  int v43; // r3
  int v44; // r4
  char *v45; // r4
  void **v46; // r4
  void **v47; // r4
  char *v48; // r4
  int v49; // r6
  int v50; // r0
  int v51; // r2
  int v52; // r0
  unsigned int v53; // r4
  int v54; // r0
  int v55; // r0
  char *v56; // r4
  int v57; // r6
  unsigned int v58; // r6
  void *v59; // r0
  char *s; // [sp+34h] [bp-18h] BYREF
  int v62; // [sp+38h] [bp-14h] BYREF
  void *ptr; // [sp+3Ch] [bp-10h] BYREF
  void **v64; // [sp+40h] [bp-Ch] BYREF
  void **v65; // [sp+44h] [bp-8h]

  v8 = a1;
  if ( a1 )
  {
    v10 = (char *)sub_248BD4;
    while ( 1 )
    {
LABEL_3:
      sub_258BD4(v10);
      s = (char *)v8[1];
      s = (char *)sub_9360C(s);
      v11 = sub_544C8((unsigned __int8 **)&s, dword_474744, "", -1, 1);
      v12 = v11;
      if ( !v11 )
        sub_946E0("Bad action list item: %s", s);
      if ( sub_53208(v11, (int)sub_248DD4) )
        break;
      v10 = (char *)sub_53208(v12, (int)sub_248BD4);
      if ( v10 )
      {
        while ( 1 )
        {
          sub_258BD4(v10);
          v29 = (char *)sub_9360C(s);
          v30 = *(_DWORD *)(a2 + 52);
          s = v29;
          v31 = sub_C2574(v30);
          sub_1C427C((char **)&ptr, &s, v30, (void ***)v31, 1);
          sub_BFE84((int *)&v64, *(_DWORD *)(a2 + 52), (int)ptr);
          sub_C11E8(v64);
          sub_248640(v64);
          v32 = v64;
          v64 = 0;
          v65 = v32;
          sub_25062C(a7 + 44);
          v33 = v65;
          if ( v65 )
          {
            sub_C0960((int)v65);
            sub_33AC04(v33);
          }
          v34 = v64;
          if ( v64 )
          {
            sub_C0960((int)v64);
            sub_33AC04(v34);
          }
          v10 = (char *)ptr;
          if ( ptr )
            free(ptr);
          v35 = s;
          if ( !s )
            break;
          ++s;
          if ( *v35 != 44 )
          {
LABEL_23:
            v8 = (int **)*v8;
            if ( !v8 )
              return;
            goto LABEL_3;
          }
        }
        v8 = (int **)*v8;
        if ( !v8 )
          return;
      }
      else
      {
        if ( !sub_53208(v12, (int)sub_247914) )
          goto LABEL_90;
        if ( !a8 )
        {
          sub_94700(
            (int)"tracepoint.c",
            1463,
            "%s: Assertion `%s' failed.",
            "void encode_actions_1(command_line*, bp_location*, int, LONGEST, collection_list*, collection_list*)",
            "stepping_list");
LABEL_90:
          sub_946E0("Invalid tracepoint command '%s'", (const char *)v8[1]);
        }
        v10 = (char *)sub_24ED00(*v8[6], a2, a3, a6, a5, a6, a8, 0);
        v8 = (int **)*v8;
        if ( !v8 )
          return;
      }
    }
    v10 = s;
    v62 = 0;
    if ( *s == 47 )
    {
      v10 = (char *)sub_248740((int)s, &v62);
      s = v10;
    }
    while ( 1 )
    {
      sub_258BD4(v10);
      v45 = (char *)sub_9360C(s);
      s = v45;
      v13 = strncasecmp("$reg", v45, 4u);
      v14 = v13;
      if ( !v13 )
        break;
      if ( !strncasecmp("$arg", v45, 4u) )
      {
        v17 = sub_16F654(0);
        v18 = *(_DWORD *)(a2 + 52);
        v19 = 65;
        goto LABEL_26;
      }
      if ( !strncasecmp("$loc", v45, 4u) )
      {
        v17 = sub_16F654(0);
        v18 = *(_DWORD *)(a2 + 52);
        v19 = 76;
LABEL_26:
        sub_24A6FC(a7, v17, v18, a3, a5, v19, v62);
        v10 = strchr(s, 44);
        s = v10;
LABEL_22:
        if ( !v10 )
          goto LABEL_23;
        goto LABEL_16;
      }
      if ( !strncasecmp("$_ret", v45, 5u) )
      {
        v20 = *(_DWORD *)(a2 + 52);
        v21 = sub_16F654(0);
        sub_BFF2C((int *)&v64, v20, v21, v62);
        sub_C11E8(v64);
        sub_248640(v64);
        v23 = v64;
        if ( (int)v64[10] > 0 )
        {
          v24 = 0;
          do
          {
            v22 = sub_258BD4(v22);
            v23 = v64;
            v25 = *((unsigned __int8 *)v64[11] + v24);
            if ( *((_BYTE *)v64[11] + v24) )
            {
              v26 = 0;
              while ( 1 )
              {
                if ( ((v25 >> v26) & 1) != 0 )
                {
                  v22 = sub_24A69C(a7, v26 + 8 * v24);
                  v23 = v64;
                }
                if ( ++v26 == 8 )
                  break;
                v25 = *((unsigned __int8 *)v23[11] + v24);
              }
            }
            ++v24;
          }
          while ( (int)v23[10] > v24 );
        }
        v65 = v23;
        v64 = 0;
        sub_25062C(a7 + 44);
        v27 = v65;
        if ( v65 )
        {
          sub_C0960((int)v65);
          sub_33AC04(v27);
        }
        v10 = strchr(s, 44);
        v28 = v64;
        s = v10;
        if ( v64 )
        {
          sub_C0960((int)v64);
          sub_33AC04(v28);
          v10 = s;
        }
      }
      else if ( !strncasecmp("$_sdata", v45, 7u) )
      {
        if ( dword_48A514 )
        {
          sub_259F10("collect static trace data\n");
          v45 = s;
        }
        *(_BYTE *)(a7 + 56) = 1;
        v10 = strchr(v45, 44);
        s = v10;
      }
      else
      {
        v36 = *(_DWORD *)(a2 + 52);
        v37 = sub_C2574(v36);
        v38 = sub_1C427C((char **)&ptr, &s, v36, (void ***)v37, 1);
        v39 = *((_DWORD *)ptr + 4);
        switch ( v39 )
        {
          case ',':
            v56 = (char *)ptr + 48;
            v57 = sub_16F654((int)v38);
            strlen(v56);
            v58 = sub_257E94(v57, v56);
            if ( v58 == -1 )
            {
              sub_94700((int)"tracepoint.c", 1361, "Register $%s not available", v56);
              if ( v65 )
                sub_16510(v65);
              if ( v64 )
                sub_16510(v64);
              v59 = ptr;
              if ( ptr )
                free(ptr);
              sub_338FFC(v59);
            }
            if ( dword_48A514 )
              sub_259F10("OP_REGISTER: ");
            sub_24A69C(a7, v58);
            break;
          case '8':
            v52 = sub_14CD3C((int *)ptr);
            v53 = ((int (__fastcall *)(int))loc_26C09C)(v52);
            v54 = sub_171258(*((_DWORD **)ptr + 8));
            v55 = sub_16F654(v54);
            sub_24E048(a7, v55, 0xFFFFFFFF, v53, *(_DWORD *)(*((_DWORD *)ptr + 8) + 20));
            sub_24E6DC(a7, (int *)ptr);
            break;
          case '(':
            v48 = (char *)sub_21B3C4(*((_DWORD *)ptr + 12));
            v49 = *((_DWORD *)ptr + 12);
            v50 = sub_16F654((int)v48);
            sub_24E750(a7, v49, v50, a3, a5, *(_DWORD *)(a2 + 52), v62);
            sub_24E66C(a7, v48, v51);
            break;
          default:
            sub_BFDD4((int *)&v64, *(_DWORD *)(a2 + 52), (int)ptr, v62);
            sub_C11E8(v64);
            sub_248640(v64);
            v41 = v64;
            if ( (int)v64[10] > 0 )
            {
              v42 = 0;
              do
              {
                v40 = sub_258BD4(v40);
                v41 = v64;
                v43 = *((unsigned __int8 *)v64[11] + v42);
                if ( *((_BYTE *)v64[11] + v42) )
                {
                  v44 = 0;
                  while ( 1 )
                  {
                    if ( ((v43 >> v44) & 1) != 0 )
                    {
                      v40 = sub_24A69C(a7, v44 + 8 * v42);
                      v41 = v64;
                    }
                    if ( ++v44 == 8 )
                      break;
                    v43 = *((unsigned __int8 *)v41[11] + v42);
                  }
                }
                ++v42;
              }
              while ( (int)v41[10] > v42 );
            }
            v65 = v41;
            v64 = 0;
            sub_25062C(a7 + 44);
            v46 = v65;
            if ( v65 )
            {
              sub_C0960((int)v65);
              sub_33AC04(v46);
            }
            sub_24E6DC(a7, (int *)ptr);
            v47 = v64;
            if ( v64 )
            {
              sub_C0960((int)v64);
              sub_33AC04(v47);
            }
            break;
        }
        if ( ptr )
          free(ptr);
        v10 = s;
      }
      if ( !v10 )
        goto LABEL_23;
LABEL_16:
      s = v10 + 1;
      if ( *v10 != 44 )
        goto LABEL_23;
    }
    while ( 1 )
    {
      v16 = sub_16F654(v13);
      if ( v14 >= ((int (__fastcall *)(int))loc_166E9C)(v16) )
        break;
      v15 = v14++;
      v13 = sub_24A69C(a7, v15);
    }
    v10 = strchr(s, 44);
    s = v10;
    goto LABEL_22;
  }
}
