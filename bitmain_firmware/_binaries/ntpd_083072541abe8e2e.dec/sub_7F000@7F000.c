int __fastcall sub_7F000(int a1)
{
  int v2; // r4
  int v3; // r5
  const char *v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  char *v8; // r0
  FILE **v10; // [sp+0h] [bp-1Ch]

  v2 = *(_DWORD *)(a1 + 68);
  v3 = *(_DWORD *)(a1 + 100);
  v10 = &stdout;
  fwrite("        case \"${OPT_CODE}\" in\n", (size_t)&dword_0 + 1, 0x1Eu, stdout);
  do
  {
    if ( (*(_DWORD *)(v2 + 16) & 0x280000) == 0 )
    {
      sub_7EE38(*(const char **)(v2 + 52), (_DWORD *)v2, (_DWORD *)(a1 + 68), (int *)(a1 + 100));
      sub_7EAC8((const char **)(a1 + 32), v2);
      v4 = *(const char **)(v2 + 56);
      if ( v4 )
      {
        sub_7EE38(v4, (_DWORD *)v2, (_DWORD *)(a1 + 68), (int *)(a1 + 100));
        if ( *(int (**)())(v2 + 40) == optionLoadOpt )
        {
          printf("            %s\n", "echo 'Warning:  Cannot suppress the loading of options files' >&2");
        }
        else
        {
          v5 = *(_DWORD *)(a1 + 32);
          v6 = *(_DWORD *)(v2 + 48);
          v7 = *(_DWORD *)(v2 + 60);
          if ( *(_WORD *)(v2 + 12) == 1 )
            v8 = "ME='%2$s'\n";
          else
            v8 = " ;;\n    esac\n";
          if ( *(_WORD *)(v2 + 12) == 1 )
            printf(v8 + 11, v5, v6, v7, v10);
          else
            printf(v8 + 14, v5, v6, v7, v10);
        }
        printf("            %s\n", "OPT_ARG_NEEDED=NO");
        fwrite("            ;;\n\n", 1u, 0x10u, *v10);
      }
    }
    --v3;
    v2 += 64;
  }
  while ( v3 > 0 );
  return printf(
           "        * )\n"
           "            echo Unknown %s: \"${OPT_CODE}\" >&2\n"
           "            echo \"$%s_USAGE_TEXT\" >&2\n"
           "            exit 1\n"
           "            ;;\n"
           "        esac\n",
           "option",
           *(const char **)(a1 + 32));
}
