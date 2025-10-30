char *__fastcall sub_321970(unsigned int a1)
{
  if ( a1 == 122 )
    return "DW_AT_call_all_calls";
  if ( a1 <= 0x7A )
  {
    if ( a1 == 68 )
      return "DW_AT_namelist_items";
    if ( a1 > 0x44 )
    {
      if ( a1 == 94 )
        return "DW_AT_decimal_sign";
      if ( a1 <= 0x5E )
      {
        if ( a1 == 81 )
        {
          return "DW_AT_byte_stride";
        }
        else if ( a1 > 0x51 )
        {
          if ( a1 == 87 )
          {
            return "DW_AT_call_column";
          }
          else if ( a1 <= 0x57 )
          {
            if ( a1 == 84 )
            {
              return "DW_AT_extension";
            }
            else if ( a1 > 0x54 )
            {
              if ( a1 == 85 )
                return "DW_AT_ranges";
              else
                return "DW_AT_trampoline";
            }
            else if ( a1 == 82 )
            {
              return "DW_AT_entry_pc";
            }
            else
            {
              return "DW_AT_use_UTF8";
            }
          }
          else if ( a1 == 90 )
          {
            return "DW_AT_description";
          }
          else if ( a1 <= 0x5A )
          {
            if ( a1 == 88 )
              return "DW_AT_call_file";
            else
              return "DW_AT_call_line";
          }
          else if ( a1 == 92 )
          {
            return "DW_AT_decimal_scale";
          }
          else if ( a1 > 0x5C )
          {
            return "DW_AT_small";
          }
          else
          {
            return "DW_AT_binary_scale";
          }
        }
        else if ( a1 == 74 )
        {
          return "DW_AT_use_location";
        }
        else if ( a1 <= 0x4A )
        {
          if ( a1 == 71 )
          {
            return "DW_AT_specification";
          }
          else if ( a1 > 0x47 )
          {
            if ( a1 == 72 )
              return "DW_AT_static_link";
            else
              return "DW_AT_type";
          }
          else if ( a1 == 69 )
          {
            return "DW_AT_priority";
          }
          else
          {
            return "DW_AT_segment";
          }
        }
        else if ( a1 == 77 )
        {
          return "DW_AT_vtable_elem_location";
        }
        else if ( a1 <= 0x4D )
        {
          if ( a1 == 75 )
            return "DW_AT_variable_parameter";
          else
            return "DW_AT_virtuality";
        }
        else if ( a1 == 79 )
        {
          return "DW_AT_associated";
        }
        else if ( a1 > 0x4F )
        {
          return "DW_AT_data_location";
        }
        else
        {
          return "DW_AT_allocated";
        }
      }
      else
      {
        if ( a1 == 107 )
          return "DW_AT_data_bit_offset";
        if ( a1 > 0x6B )
        {
          if ( a1 == 114 )
            return "DW_AT_str_offsets_base";
          if ( a1 <= 0x72 )
          {
            if ( a1 == 110 )
            {
              return "DW_AT_linkage_name";
            }
            else if ( a1 <= 0x6E )
            {
              if ( a1 == 108 )
                return "DW_AT_const_expr";
              else
                return "DW_AT_enum_class";
            }
            else if ( a1 == 112 )
            {
              return "DW_AT_string_length_byte_size";
            }
            else if ( a1 > 0x70 )
            {
              return "DW_AT_rank";
            }
            else
            {
              return "DW_AT_string_length_bit_size";
            }
          }
          else
          {
            if ( a1 == 118 )
              return "DW_AT_dwo_name";
            if ( a1 <= 0x76 )
            {
              if ( a1 == 115 )
                return "DW_AT_addr_base";
              if ( a1 == 116 )
                return "DW_AT_rnglists_base";
              return 0;
            }
            if ( a1 == 120 )
            {
              return "DW_AT_rvalue_reference";
            }
            else if ( a1 > 0x78 )
            {
              return "DW_AT_macros";
            }
            else
            {
              return "DW_AT_reference";
            }
          }
        }
        else if ( a1 == 100 )
        {
          return "DW_AT_object_pointer";
        }
        else if ( a1 <= 0x64 )
        {
          if ( a1 == 97 )
          {
            return "DW_AT_mutable";
          }
          else if ( a1 > 0x61 )
          {
            if ( a1 == 98 )
              return "DW_AT_threads_scaled";
            else
              return "DW_AT_explicit";
          }
          else if ( a1 == 95 )
          {
            return "DW_AT_digit_count";
          }
          else
          {
            return "DW_AT_picture_string";
          }
        }
        else if ( a1 == 103 )
        {
          return "DW_AT_pure";
        }
        else if ( a1 <= 0x67 )
        {
          if ( a1 == 101 )
            return "DW_AT_endianity";
          else
            return "DW_AT_elemental";
        }
        else if ( a1 == 105 )
        {
          return "DW_AT_signature";
        }
        else if ( a1 > 0x69 )
        {
          return "DW_AT_main_subprogram";
        }
        else
        {
          return "DW_AT_recursive";
        }
      }
    }
    else
    {
      if ( a1 == 33 )
        return "DW_AT_is_optional";
      if ( a1 <= 0x21 )
      {
        if ( a1 == 19 )
          return "DW_AT_language";
        if ( a1 > 0x13 )
        {
          if ( a1 == 25 )
            return "DW_AT_string_length";
          if ( a1 <= 0x19 )
          {
            if ( a1 == 22 )
            {
              return "DW_AT_discr_value";
            }
            else if ( a1 > 0x16 )
            {
              if ( a1 == 23 )
                return "DW_AT_visibility";
              else
                return "DW_AT_import";
            }
            else if ( a1 == 20 )
            {
              return "DW_AT_member";
            }
            else
            {
              return "DW_AT_discr";
            }
          }
          else
          {
            if ( a1 == 28 )
              return "DW_AT_const_value";
            if ( a1 > 0x1C )
            {
              if ( a1 == 30 )
                return "DW_AT_default_value";
              if ( a1 < 0x1E )
                return "DW_AT_containing_type";
              if ( a1 == 32 )
                return "DW_AT_inline";
              return 0;
            }
            if ( a1 == 26 )
              return "DW_AT_common_reference";
            else
              return "DW_AT_comp_dir";
          }
        }
        else
        {
          if ( a1 == 11 )
            return "DW_AT_byte_size";
          if ( a1 <= 0xB )
          {
            if ( a1 == 3 )
              return "DW_AT_name";
            if ( a1 > 3 )
            {
              if ( a1 == 9 )
                return "DW_AT_ordering";
              if ( a1 == 10 )
                return "DW_AT_subscr_data";
            }
            else
            {
              if ( a1 == 1 )
                return "DW_AT_sibling";
              if ( a1 == 2 )
                return "DW_AT_location";
            }
            return 0;
          }
          if ( a1 == 15 )
            return "DW_AT_element_list";
          if ( a1 <= 0xF )
          {
            if ( a1 == 12 )
              return "DW_AT_bit_offset";
            if ( a1 == 13 )
              return "DW_AT_bit_size";
            return 0;
          }
          if ( a1 == 17 )
          {
            return "DW_AT_low_pc";
          }
          else if ( a1 > 0x11 )
          {
            return "DW_AT_high_pc";
          }
          else
          {
            return "DW_AT_stmt_list";
          }
        }
      }
      else
      {
        if ( a1 == 54 )
          return "DW_AT_calling_convention";
        if ( a1 > 0x36 )
        {
          if ( a1 == 61 )
          {
            return "DW_AT_discr_list";
          }
          else if ( a1 <= 0x3D )
          {
            if ( a1 == 57 )
            {
              return "DW_AT_decl_column";
            }
            else if ( a1 <= 0x39 )
            {
              if ( a1 == 55 )
                return "DW_AT_count";
              else
                return "DW_AT_data_member_location";
            }
            else if ( a1 == 59 )
            {
              return "DW_AT_decl_line";
            }
            else if ( a1 > 0x3B )
            {
              return "DW_AT_declaration";
            }
            else
            {
              return "DW_AT_decl_file";
            }
          }
          else if ( a1 == 64 )
          {
            return "DW_AT_frame_base";
          }
          else if ( a1 <= 0x40 )
          {
            if ( a1 == 62 )
              return "DW_AT_encoding";
            else
              return "DW_AT_external";
          }
          else if ( a1 == 66 )
          {
            return "DW_AT_identifier_case";
          }
          else if ( a1 > 0x42 )
          {
            return "DW_AT_macro_info";
          }
          else
          {
            return "DW_AT_friend";
          }
        }
        else
        {
          if ( a1 == 46 )
            return "DW_AT_bit_stride";
          if ( a1 <= 0x2E )
          {
            if ( a1 == 39 )
              return "DW_AT_prototyped";
            if ( a1 > 0x27 )
            {
              if ( a1 == 42 )
                return "DW_AT_return_addr";
              if ( a1 == 44 )
                return "DW_AT_start_scope";
            }
            else
            {
              if ( a1 == 34 )
                return "DW_AT_lower_bound";
              if ( a1 == 37 )
                return "DW_AT_producer";
            }
            return 0;
          }
          if ( a1 == 50 )
            return "DW_AT_accessibility";
          if ( a1 <= 0x32 )
          {
            if ( a1 == 47 )
              return "DW_AT_upper_bound";
            if ( a1 == 49 )
              return "DW_AT_abstract_origin";
            return 0;
          }
          if ( a1 == 52 )
          {
            return "DW_AT_artificial";
          }
          else if ( a1 > 0x34 )
          {
            return "DW_AT_base_types";
          }
          else
          {
            return "DW_AT_address_class";
          }
        }
      }
    }
  }
  else
  {
    if ( a1 == 8453 )
      return "DW_AT_body_begin";
    if ( a1 > 0x2105 )
    {
      if ( a1 == 8501 )
        return "DW_AT_GNU_pubtypes";
      if ( a1 > 0x2135 )
      {
        if ( a1 == 14850 )
          return "DW_AT_PGI_lstride";
        if ( a1 > 0x3A02 )
        {
          if ( a1 == 16359 )
            return "DW_AT_APPLE_omit_frame_ptr";
          if ( a1 <= 0x3FE7 )
          {
            if ( a1 == 16355 )
              return "DW_AT_APPLE_isa";
            if ( a1 <= 0x3FE3 )
            {
              if ( a1 == 16353 )
                return "DW_AT_APPLE_optimized";
              if ( a1 == 16354 )
                return "DW_AT_APPLE_flags";
              return 0;
            }
            if ( a1 == 16357 )
            {
              return "DW_AT_APPLE_major_runtime_vers";
            }
            else if ( a1 > 0x3FE5 )
            {
              return "DW_AT_APPLE_runtime_class";
            }
            else
            {
              return "DW_AT_APPLE_block";
            }
          }
          else
          {
            if ( a1 == 16362 )
              return "DW_AT_APPLE_property_setter";
            if ( a1 > 0x3FEA )
            {
              if ( a1 == 16364 )
                return "DW_AT_APPLE_objc_complete_type";
              if ( a1 < 0x3FEC )
                return "DW_AT_APPLE_property_attribute";
              if ( a1 == 16365 )
                return "DW_AT_APPLE_property";
              return 0;
            }
            if ( a1 == 16360 )
              return "DW_AT_APPLE_property_name";
            else
              return "DW_AT_APPLE_property_getter";
          }
        }
        else
        {
          if ( a1 == 8962 )
            return "DW_AT_GNAT_descriptive_type";
          if ( a1 <= 0x2302 )
          {
            if ( a1 == 8504 )
              return "DW_AT_GNU_entry_view";
            if ( a1 > 0x2138 )
            {
              if ( a1 == 8705 )
                return "DW_AT_VMS_rtnbeg_pd_address";
              if ( a1 == 8961 )
                return "DW_AT_use_GNAT_descriptive_type";
              return 0;
            }
            if ( a1 == 8502 )
              return "DW_AT_GNU_discriminator";
            else
              return "DW_AT_GNU_locviews";
          }
          else
          {
            if ( a1 == 8965 )
              return "DW_AT_GNU_bias";
            if ( a1 > 0x2305 )
            {
              if ( a1 == 14848 )
                return "DW_AT_PGI_lbase";
              if ( a1 > 0x3A00 )
                return "DW_AT_PGI_soffset";
              if ( a1 == 12816 )
                return "DW_AT_upc_threads_scaled";
              return 0;
            }
            if ( a1 == 8963 )
              return "DW_AT_GNU_numerator";
            else
              return "DW_AT_GNU_denominator";
          }
        }
      }
      else
      {
        if ( a1 == 8466 )
          return "DW_AT_GNU_call_site_data_value";
        if ( a1 > 0x2112 )
        {
          if ( a1 == 8473 )
            return "DW_AT_GNU_macros";
          if ( a1 <= 0x2119 )
          {
            if ( a1 == 8469 )
            {
              return "DW_AT_GNU_tail_call";
            }
            else if ( a1 <= 0x2115 )
            {
              if ( a1 == 8467 )
                return "DW_AT_GNU_call_site_target";
              else
                return "DW_AT_GNU_call_site_target_clobbered";
            }
            else if ( a1 == 8471 )
            {
              return "DW_AT_GNU_all_call_sites";
            }
            else if ( a1 > 0x2117 )
            {
              return "DW_AT_GNU_all_source_call_sites";
            }
            else
            {
              return "DW_AT_GNU_all_tail_call_sites";
            }
          }
          else
          {
            if ( a1 == 8497 )
              return "DW_AT_GNU_dwo_id";
            if ( a1 <= 0x2131 )
            {
              if ( a1 == 8474 )
                return "DW_AT_GNU_deleted";
              if ( a1 == 8496 )
                return "DW_AT_GNU_dwo_name";
              return 0;
            }
            if ( a1 == 8499 )
            {
              return "DW_AT_GNU_addr_base";
            }
            else if ( a1 > 0x2133 )
            {
              return "DW_AT_GNU_pubnames";
            }
            else
            {
              return "DW_AT_GNU_ranges_base";
            }
          }
        }
        else if ( a1 == 8459 )
        {
          return "DW_AT_GNU_pt_guarded";
        }
        else if ( a1 <= 0x210B )
        {
          if ( a1 == 8456 )
          {
            return "DW_AT_GNU_guarded_by";
          }
          else if ( a1 > 0x2108 )
          {
            if ( a1 == 8457 )
              return "DW_AT_GNU_pt_guarded_by";
            else
              return "DW_AT_GNU_guarded";
          }
          else if ( a1 == 8454 )
          {
            return "DW_AT_body_end";
          }
          else
          {
            return "DW_AT_GNU_vector";
          }
        }
        else if ( a1 == 8462 )
        {
          return "DW_AT_GNU_shared_locks_required";
        }
        else if ( a1 <= 0x210E )
        {
          if ( a1 == 8460 )
            return "DW_AT_GNU_locks_excluded";
          else
            return "DW_AT_GNU_exclusive_locks_required";
        }
        else if ( a1 == 8464 )
        {
          return "DW_AT_GNU_template_name";
        }
        else if ( a1 > 0x2110 )
        {
          return "DW_AT_GNU_call_site_value";
        }
        else
        {
          return "DW_AT_GNU_odr_signature";
        }
      }
    }
    else
    {
      if ( a1 == 8199 )
        return "DW_AT_MIPS_linkage_name";
      if ( a1 <= 0x2007 )
      {
        if ( a1 == 135 )
          return "DW_AT_noreturn";
        if ( a1 > 0x87 )
        {
          if ( a1 == 0x2000 )
            return "DW_AT_HP_block_index";
          if ( a1 <= 0x2000 )
          {
            if ( a1 == 138 )
              return "DW_AT_deleted";
            if ( a1 > 0x8A )
            {
              if ( a1 == 139 )
                return "DW_AT_defaulted";
              if ( a1 == 140 )
                return "DW_AT_loclists_base";
              return 0;
            }
            if ( a1 == 136 )
              return "DW_AT_alignment";
            else
              return "DW_AT_export_symbols";
          }
          else if ( a1 == 8195 )
          {
            return "DW_AT_MIPS_tail_loop_begin";
          }
          else if ( a1 <= 0x2003 )
          {
            if ( a1 == 8193 )
              return "DW_AT_MIPS_fde";
            else
              return "DW_AT_MIPS_loop_begin";
          }
          else if ( a1 == 8197 )
          {
            return "DW_AT_MIPS_loop_unroll_factor";
          }
          else if ( a1 > 0x2005 )
          {
            return "DW_AT_MIPS_software_pipeline_depth";
          }
          else
          {
            return "DW_AT_MIPS_epilog_begin";
          }
        }
        else if ( a1 == 128 )
        {
          return "DW_AT_call_parameter";
        }
        else if ( a1 <= 0x80 )
        {
          if ( a1 == 125 )
          {
            return "DW_AT_call_return_pc";
          }
          else if ( a1 > 0x7D )
          {
            if ( a1 == 126 )
              return "DW_AT_call_value";
            else
              return "DW_AT_call_origin";
          }
          else if ( a1 == 123 )
          {
            return "DW_AT_call_all_source_calls";
          }
          else
          {
            return "DW_AT_call_all_tail_calls";
          }
        }
        else if ( a1 == 131 )
        {
          return "DW_AT_call_target";
        }
        else if ( a1 <= 0x83 )
        {
          if ( a1 == 129 )
            return "DW_AT_call_pc";
          else
            return "DW_AT_call_tail_call";
        }
        else if ( a1 == 133 )
        {
          return "DW_AT_call_data_location";
        }
        else if ( a1 > 0x85 )
        {
          return "DW_AT_call_data_value";
        }
        else
        {
          return "DW_AT_call_target_clobbered";
        }
      }
      else
      {
        if ( a1 == 8216 )
          return "DW_AT_HP_cold_region_high_pc";
        if ( a1 <= 0x2018 )
        {
          if ( a1 == 8209 )
            return "DW_AT_HP_proc_per_section";
          if ( a1 > 0x2011 )
          {
            if ( a1 == 8212 )
              return "DW_AT_HP_opt_level";
            if ( a1 <= 0x2014 )
            {
              if ( a1 == 8210 )
                return "DW_AT_HP_raw_data_ptr";
              else
                return "DW_AT_HP_pass_by_reference";
            }
            else if ( a1 == 8214 )
            {
              return "DW_AT_HP_opt_flags";
            }
            else if ( a1 > 0x2016 )
            {
              return "DW_AT_HP_cold_region_low_pc";
            }
            else
            {
              return "DW_AT_HP_prof_version_id";
            }
          }
          if ( a1 == 8202 )
            return "DW_AT_MIPS_clone_origin";
          if ( a1 <= 0x200A )
          {
            if ( a1 == 8200 )
              return "DW_AT_MIPS_stride";
            else
              return "DW_AT_MIPS_abstract_name";
          }
          if ( a1 == 8203 )
            return "DW_AT_MIPS_has_inlines";
          if ( a1 == 8208 )
            return "DW_AT_HP_actuals_stmt_list";
          return 0;
        }
        if ( a1 == 8226 )
          return "DW_AT_HP_definition_points";
        if ( a1 > 0x2022 )
        {
          if ( a1 == 8449 )
            return "DW_AT_sf_names";
          if ( a1 <= 0x2101 )
          {
            if ( a1 == 8227 )
              return "DW_AT_HP_default_location";
            if ( a1 == 8233 )
              return "DW_AT_HP_is_result_param";
            return 0;
          }
          if ( a1 == 8451 )
          {
            return "DW_AT_mac_info";
          }
          else if ( a1 > 0x2103 )
          {
            return "DW_AT_src_coords";
          }
          else
          {
            return "DW_AT_src_info";
          }
        }
        else
        {
          if ( a1 == 8219 )
            return "DW_AT_HP_prof_flags";
          if ( a1 > 0x201B )
          {
            if ( a1 == 8224 )
              return "DW_AT_HP_unit_size";
            if ( a1 > 0x2020 )
              return "DW_AT_HP_widened_byte_size";
            if ( a1 == 8223 )
              return "DW_AT_HP_unit_name";
            return 0;
          }
          if ( a1 == 8217 )
            return "DW_AT_HP_all_variables_modifiable";
          else
            return "DW_AT_HP_linkage_name";
        }
      }
    }
  }
}
