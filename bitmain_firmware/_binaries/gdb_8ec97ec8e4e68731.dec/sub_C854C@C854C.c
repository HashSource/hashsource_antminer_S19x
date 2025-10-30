char *__fastcall sub_C854C(char *result, unsigned int a2, char **a3, _DWORD *a4, int *a5, char **a6)
{
  char *v7; // r1
  char *v8; // r0
  char *v9; // r4
  int v10; // r3
  bool v11; // zf
  _BYTE *v12; // r0
  char *v13; // r5
  _BYTE *v14; // r4
  size_t v15; // r11
  int v16; // r0
  char *v17; // r2
  char *v18; // r3
  char *v19; // r4
  int *v20; // r0
  int v21; // r3
  size_t v22; // r0
  size_t v23; // r0
  char *s1; // [sp+14h] [bp-10h] BYREF
  char *endptr[2]; // [sp+1Ch] [bp-8h] BYREF

  *a3 = 0;
  *a4 = -1;
  v7 = result;
  s1 = result;
  *a5 = 0;
  *a6 = 0;
LABEL_2:
  if ( v7 )
  {
    while ( *v7 )
    {
      v8 = (char *)sub_9360C(v7);
      s1 = v8;
      v9 = v8;
      v10 = (unsigned __int8)*v8;
      v11 = v10 == 44;
      if ( v10 != 44 )
        v11 = v10 == 34;
      if ( v11 )
      {
        v23 = strlen(v8);
        result = sub_93330(v9, v23);
        *a6 = result;
        return result;
      }
      v12 = sub_93610((unsigned __int8 *)v8);
      v13 = s1;
      v14 = v12;
      v15 = v12 - s1;
      if ( v12 - s1 <= 0 )
        goto LABEL_20;
      if ( !strncmp(s1, "if", v12 - s1) )
      {
        v19 = v14 + 1;
        s1 = v19;
        v20 = sub_C2574(a2);
        sub_1C427C(endptr, &s1, a2, v20, 0);
        if ( endptr[0] )
          free(endptr[0]);
        result = sub_93330(v19, s1 - v19);
        v7 = s1;
        *a3 = result;
        goto LABEL_2;
      }
      if ( !strncmp(v13, "thread", v15) )
      {
        s1 = v14 + 1;
        result = (char *)sub_242338(v14 + 1, endptr);
        v7 = endptr[0];
        if ( s1 == endptr[0] )
          sub_946E0("Junk after thread keyword.");
        v21 = *((_DWORD *)result + 5);
        s1 = endptr[0];
        *a4 = v21;
        goto LABEL_2;
      }
      if ( strncmp(v13, "task", v15) )
      {
LABEL_20:
        v22 = strlen(v13);
        result = sub_93330(v13, v22);
        *a6 = result;
        return result;
      }
      s1 = v14 + 1;
      v16 = strtol(v14 + 1, endptr, 0);
      v17 = s1;
      v18 = endptr[0];
      *a5 = v16;
      if ( v17 == v18 )
        sub_946E0("Junk after task keyword.");
      result = (char *)sub_B0A54(v16);
      if ( !result )
        sub_946E0("Unknown task %d.", *a5);
      v7 = endptr[0];
      s1 = endptr[0];
      if ( !endptr[0] )
        return result;
    }
  }
  return result;
}
