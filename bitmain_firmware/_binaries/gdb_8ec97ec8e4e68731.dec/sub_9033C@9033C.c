int __fastcall sub_9033C(__int64 a1)
{
  int *v1; // r9
  int v2; // r4
  int v3; // r5
  const char *v4; // r5
  int v5; // r4
  int v7; // r6
  int v8; // r0
  int v9; // r0
  __int64 v10; // r0
  __int64 v11; // r4
  _BYTE *v12; // r3
  _DWORD *v13; // r2
  unsigned int v14; // r7
  struct obstack *v15; // r4
  char *chunk_limit; // r6
  char *next_free; // r5
  struct obstack *v18; // r3
  char *v19; // r11
  size_t v20; // r0
  size_t v21; // r8
  int v22; // r4
  _BYTE *v23; // r1
  int v24; // r2
  int v25; // r3
  char v26; // r1
  const char *v27; // r3
  const char *v28; // r5
  int v29; // r0
  bool v30; // zf
  int v31; // r3
  int v32; // r0
  char *v33; // r2
  int v34; // r0
  void *ptr; // [sp+Ch] [bp-28h] BYREF
  _BYTE *v36; // [sp+10h] [bp-24h]
  char *s; // [sp+18h] [bp-1Ch] BYREF
  char *v38; // [sp+1Ch] [bp-18h]
  char v39; // [sp+20h] [bp-14h] BYREF

  if ( *(_DWORD *)HIDWORD(a1) == 40 )
  {
    v4 = (const char *)sub_9006C(a1, (_DWORD *)HIDWORD(a1));
    v5 = sub_8D0D4(v4, dword_487CD0);
    if ( !v5 )
      sub_946E0("No typed name '%s' in current context", v4);
  }
  else
  {
    if ( *(_DWORD *)HIDWORD(a1) != 88 )
    {
      v10 = sub_94700(
              "rust-exp.y",
              2020,
              "%s: Assertion `%s' failed.",
              "type* convert_ast_to_type(parser_state*, const rust_op*)",
              "operation->opcode == OP_TYPE");
LABEL_43:
      sub_946E0("Negative array length", HIDWORD(v10));
    }
    v2 = HIDWORD(a1);
    v3 = a1;
    switch ( *(_DWORD *)(HIDWORD(a1) + 4) )
    {
      case 1:
      case 0x12:
        goto LABEL_9;
      case 2:
        LODWORD(v10) = sub_9033C(a1, *(_DWORD *)(HIDWORD(a1) + 16));
        v11 = *(_QWORD *)(v2 + 40);
        if ( v11 < 0 )
          goto LABEL_43;
        v5 = sub_172140(v10, (unsigned __int64)(v11 - 1) >> 32, 0, 0, v11 - 1, (unsigned __int64)(v11 - 1) >> 32);
LABEL_7:
        while ( !v5 )
        {
          a1 = sub_94700(
                 "rust-exp.y",
                 2097,
                 "%s: Assertion `%s' failed.",
                 "type* convert_ast_to_type(parser_state*, const rust_op*)",
                 "result != NULL");
LABEL_9:
          v9 = sub_9033C(a1, *(_DWORD *)(HIDWORD(a1) + 16));
          v5 = sub_1700C0(v9);
        }
        break;
      case 3:
        v1 = &dword_4751A0;
        sub_8FFD0(&ptr, a1, *(int ***)(HIDWORD(a1) + 16));
        v2 = dword_4751A4;
        v12 = *(_BYTE **)(dword_4751A4 + 12);
        if ( *(_BYTE **)(dword_4751A4 + 16) != v12 )
          goto LABEL_13;
        goto LABEL_41;
      case 7:
        sub_8FFD0(&s, a1, *(int ***)(HIDWORD(a1) + 40));
        v32 = sub_9033C(v3, *(_DWORD *)(v2 + 16));
        v33 = s;
        if ( v38 == s )
          v33 = 0;
        v34 = ((int (__fastcall *)(int, int, char *))loc_1715BC)(v32, (v38 - s) >> 2, v33);
        v5 = sub_1700C0(v34);
        if ( s )
          sub_339E64(s);
        goto LABEL_7;
      case 0x16:
        v7 = sub_8C44C("usize");
        v8 = sub_9033C(v3, *(_DWORD *)(v2 + 16));
        v5 = sub_1FB820("&[*gdb*]", v8, v7);
        goto LABEL_7;
      default:
        sub_94700(
          "rust-exp.y",
          2094,
          "%s: %s",
          "type* convert_ast_to_type(parser_state*, const rust_op*)",
          "unhandled opcode in convert_ast_to_type");
LABEL_41:
        obstack_newchunk((struct obstack *)v2, 1);
        v12 = *(_BYTE **)(v2 + 12);
LABEL_13:
        *(_DWORD *)(v2 + 12) = v12 + 1;
        *v12 = 40;
        v13 = ptr;
        if ( ptr != v36 )
        {
          v14 = 0;
          do
          {
            sub_255DE4(&s, v13[v14]);
            v15 = (struct obstack *)v1[1];
            chunk_limit = v15->chunk_limit;
            next_free = v15->next_free;
            if ( v14 )
            {
              if ( chunk_limit == next_free )
              {
                obstack_newchunk((struct obstack *)v1[1], 1);
                next_free = v15->next_free;
              }
              v18 = (struct obstack *)v1[1];
              v15->next_free = next_free + 1;
              *next_free = 44;
              v15 = v18;
              next_free = v18->next_free;
              chunk_limit = v18->chunk_limit;
            }
            v19 = s;
            v20 = strlen(s);
            v21 = v20;
            if ( v20 > chunk_limit - next_free )
            {
              obstack_newchunk(v15, v20);
              next_free = v15->next_free;
              v19 = s;
            }
            memcpy(next_free, v19, v21);
            v15->next_free += v21;
            if ( s != &v39 )
              sub_339E64(s);
            v13 = ptr;
            ++v14;
          }
          while ( v14 < (v36 - (_BYTE *)ptr) >> 2 );
        }
        v22 = v1[1];
        v23 = *(_BYTE **)(v22 + 12);
        if ( (unsigned int)(*(_DWORD *)(v22 + 16) - (_DWORD)v23) <= 1 )
        {
          obstack_newchunk((struct obstack *)v1[1], 2);
          v24 = v1[1];
          v23 = *(_BYTE **)(v22 + 12);
        }
        else
        {
          v24 = v1[1];
        }
        *v23 = 41;
        v25 = *(_DWORD *)(v22 + 12);
        v26 = v25 + 2;
        *(_DWORD *)(v22 + 12) = v25 + 2;
        *(_BYTE *)(v25 + 1) = 0;
        v27 = *(const char **)(v24 + 12);
        v28 = *(const char **)(v24 + 8);
        v29 = *(_DWORD *)(v24 + 16);
        v30 = v27 == v28;
        if ( v27 == v28 )
          v26 = *(_BYTE *)(v24 + 40);
        v31 = (unsigned int)&v27[*(_DWORD *)(v24 + 24)] & ~*(_DWORD *)(v24 + 24);
        *(_DWORD *)(v24 + 12) = v31;
        if ( v30 )
          *(_BYTE *)(v24 + 40) = v26 | 2;
        if ( v31 - *(_DWORD *)(v24 + 4) > (unsigned int)(v29 - *(_DWORD *)(v24 + 4)) )
        {
          v31 = v29;
          *(_DWORD *)(v24 + 12) = v29;
        }
        *(_DWORD *)(v24 + 8) = v31;
        v5 = sub_8D0D4(v28, dword_487CD0);
        if ( !v5 )
          sub_946E0("could not find tuple type '%s'", v28);
        if ( ptr )
          sub_339E64(ptr);
        break;
    }
  }
  return v5;
}
