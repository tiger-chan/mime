#include <mime/mime_details.hpp>

namespace {
	template<typename T, mime::uint32 Size>
	constexpr mime::int32 length_of(T (&)[Size]) {
		return mime::int32(Size);
	}

	static constexpr int application_andrew_minus_inset[] = { 266,  };
	static constexpr int application_applixware[] = { 59,  };
	static constexpr int application_atom_plus_xml[] = { 49,  };
	static constexpr int application_atomcat_plus_xml[] = { 50,  };
	static constexpr int application_atomdeleted_plus_xml[] = { 51,  };
	static constexpr int application_atomsvc_plus_xml[] = { 52,  };
	static constexpr int application_atsc_minus_dwd_plus_xml[] = { 225,  };
	static constexpr int application_atsc_minus_held_plus_xml[] = { 365,  };
	static constexpr int application_atsc_minus_rsat_plus_xml[] = { 826,  };
	static constexpr int application_bdoc[] = { 69,  };
	static constexpr int application_calendar_plus_xml[] = { 1148,  };
	static constexpr int application_ccxml_plus_xml[] = { 110,  };
	static constexpr int application_cdfx_plus_xml[] = { 113,  };
	static constexpr int application_cdmi_minus_capability[] = { 115,  };
	static constexpr int application_cdmi_minus_container[] = { 116,  };
	static constexpr int application_cdmi_minus_domain[] = { 117,  };
	static constexpr int application_cdmi_minus_object[] = { 118,  };
	static constexpr int application_cdmi_minus_queue[] = { 119,  };
	static constexpr int application_cpl_plus_xml[] = { 151,  };
	static constexpr int application_cu_minus_seeme[] = { 166,  };
	static constexpr int application_dash_plus_xml[] = { 579,  };
	static constexpr int application_dash_minus_patch_plus_xml[] = { 589,  };
	static constexpr int application_davmount_plus_xml[] = { 175,  };
	static constexpr int application_docbook_plus_xml[] = { 177,  };
	static constexpr int application_dssc_plus_der[] = { 217,  };
	static constexpr int application_dssc_plus_xml[] = { 1152,  };
	static constexpr int application_ecmascript[] = { 235, 251,  };
	static constexpr int application_emma_plus_xml[] = { 244,  };
	static constexpr int application_emotionml_plus_xml[] = { 245,  };
	static constexpr int application_epub_plus_zip[] = { 250,  };
	static constexpr int application_exi[] = { 262,  };
	static constexpr int application_express[] = { 263,  };
	static constexpr int application_fdt_plus_xml[] = { 277,  };
	static constexpr int application_font_minus_tdpfr[] = { 728,  };
	static constexpr int application_geo_plus_json[] = { 320,  };
	static constexpr int application_gml_plus_xml[] = { 329,  };
	static constexpr int application_gpx_plus_xml[] = { 333,  };
	static constexpr int application_gxf[] = { 348,  };
	static constexpr int application_gzip[] = { 350,  };
	static constexpr int application_hjson[] = { 367,  };
	static constexpr int application_hyperstudio[] = { 928,  };
	static constexpr int application_inkml_plus_xml[] = { 402, 403,  };
	static constexpr int application_ipfix[] = { 406,  };
	static constexpr int application_its_plus_xml[] = { 413,  };
	static constexpr int application_java_minus_archive[] = { 231, 419, 1082,  };
	static constexpr int application_java_minus_serialized_minus_object[] = { 862,  };
	static constexpr int application_java_minus_vm[] = { 134,  };
	static constexpr int application_javascript[] = { 441, 552,  };
	static constexpr int application_json[] = { 442, 522,  };
	static constexpr int application_json5[] = { 443,  };
	static constexpr int application_jsonml_plus_json[] = { 445,  };
	static constexpr int application_ld_plus_json[] = { 444,  };
	static constexpr int application_lgr_plus_xml[] = { 482,  };
	static constexpr int application_lost_plus_xml[] = { 491,  };
	static constexpr int application_mac_minus_binhex40[] = { 372,  };
	static constexpr int application_mac_minus_compactpro[] = { 153,  };
	static constexpr int application_mads_plus_xml[] = { 516,  };
	static constexpr int application_manifest_plus_json[] = { 1097,  };
	static constexpr int application_marc[] = { 594,  };
	static constexpr int application_marcxml_plus_xml[] = { 595,  };
	static constexpr int application_mathematica[] = { 515, 526, 625,  };
	static constexpr int application_mathml_plus_xml[] = { 525,  };
	static constexpr int application_mbox[] = { 528,  };
	static constexpr int application_media_minus_policy_minus_dataset_plus_xml[] = { 582,  };
	static constexpr int application_mediaservercontrol_plus_xml[] = { 597,  };
	static constexpr int application_metalink_plus_xml[] = { 539,  };
	static constexpr int application_metalink4_plus_xml[] = { 538,  };
	static constexpr int application_mets_plus_xml[] = { 540,  };
	static constexpr int application_mmt_minus_aei_plus_xml[] = { 517,  };
	static constexpr int application_mmt_minus_usd_plus_xml[] = { 612,  };
	static constexpr int application_mods_plus_xml[] = { 566,  };
	static constexpr int application_mp21[] = { 503, 570,  };
	static constexpr int application_mp4[] = { 511, 576,  };
	static constexpr int application_msword[] = { 206, 209,  };
	static constexpr int application_mxf[] = { 617,  };
	static constexpr int application_n_minus_quads[] = { 638,  };
	static constexpr int application_n_minus_triples[] = { 641,  };
	static constexpr int application_node[] = { 132,  };
	static constexpr int application_octet_minus_stream[] = { 73, 83, 86, 184, 187, 195, 196, 199, 201, 204, 222, 240, 259, 397, 410, 492, 523, 603, 606, 607, 735, 905,  };
	static constexpr int application_oda[] = { 653,  };
	static constexpr int application_oebps_minus_package_plus_xml[] = { 674,  };
	static constexpr int application_ogg[] = { 668,  };
	static constexpr int application_omdoc_plus_xml[] = { 669,  };
	static constexpr int application_onenote[] = { 670, 671, 672, 673,  };
	static constexpr int application_oxps[] = { 694,  };
	static constexpr int application_p2p_minus_overlay_plus_xml[] = { 801,  };
	static constexpr int application_patch_minus_ops_minus_error_plus_xml[] = { 1156,  };
	static constexpr int application_pdf[] = { 723,  };
	static constexpr int application_pgp_minus_encrypted[] = { 732,  };
	static constexpr int application_pgp_minus_keys[] = { 42,  };
	static constexpr int application_pgp_minus_signature[] = { 42, 879,  };
	static constexpr int application_pics_minus_rules[] = { 765,  };
	static constexpr int application_pkcs10[] = { 697,  };
	static constexpr int application_pkcs7_minus_mime[] = { 700, 701,  };
	static constexpr int application_pkcs7_minus_signature[] = { 703,  };
	static constexpr int application_pkcs8[] = { 704,  };
	static constexpr int application_pkix_minus_attr_minus_cert[] = { 15,  };
	static constexpr int application_pkix_minus_cert[] = { 123,  };
	static constexpr int application_pkix_minus_crl[] = { 155,  };
	static constexpr int application_pkix_minus_pkipath[] = { 737,  };
	static constexpr int application_pkixcmp[] = { 736,  };
	static constexpr int application_pls_plus_xml[] = { 743,  };
	static constexpr int application_postscript[] = { 27, 249, 767,  };
	static constexpr int application_provenance_plus_xml[] = { 766,  };
	static constexpr int application_prs_cww[] = { 168,  };
	static constexpr int application_pskc_plus_xml[] = { 771,  };
	static constexpr int application_raml_plus_yaml[] = { 793,  };
	static constexpr int application_rdf_plus_xml[] = { 693, 799,  };
	static constexpr int application_reginfo_plus_xml[] = { 805,  };
	static constexpr int application_relax_minus_ng_minus_compact_minus_syntax[] = { 816,  };
	static constexpr int application_resource_minus_lists_plus_xml[] = { 808,  };
	static constexpr int application_resource_minus_lists_minus_diff_plus_xml[] = { 810,  };
	static constexpr int application_rls_minus_services_plus_xml[] = { 825,  };
	static constexpr int application_route_minus_apd_plus_xml[] = { 794,  };
	static constexpr int application_route_minus_s_minus_tsid_plus_xml[] = { 895,  };
	static constexpr int application_route_minus_usd_plus_xml[] = { 834,  };
	static constexpr int application_rpki_minus_ghostbusters[] = { 314,  };
	static constexpr int application_rpki_minus_manifest[] = { 542,  };
	static constexpr int application_rpki_minus_roa[] = { 818,  };
	static constexpr int application_rsd_plus_xml[] = { 827,  };
	static constexpr int application_rss_plus_xml[] = { 829,  };
	static constexpr int application_rtf[] = { 830,  };
	static constexpr int application_sbml_plus_xml[] = { 839,  };
	static constexpr int application_scvp_minus_cv_minus_request[] = { 843,  };
	static constexpr int application_scvp_minus_cv_minus_response[] = { 844,  };
	static constexpr int application_scvp_minus_vp_minus_request[] = { 912,  };
	static constexpr int application_scvp_minus_vp_minus_response[] = { 911,  };
	static constexpr int application_sdp[] = { 852,  };
	static constexpr int application_senml_plus_xml[] = { 860,  };
	static constexpr int application_sensml_plus_xml[] = { 861,  };
	static constexpr int application_set_minus_payment_minus_initiation[] = { 863,  };
	static constexpr int application_set_minus_registration_minus_initiation[] = { 864,  };
	static constexpr int application_shf_plus_xml[] = { 875,  };
	static constexpr int application_sieve[] = { 878, 886,  };
	static constexpr int application_smil_plus_xml[] = { 899, 900,  };
	static constexpr int application_sparql_minus_query[] = { 824,  };
	static constexpr int application_sparql_minus_results_plus_xml[] = { 918,  };
	static constexpr int application_srgs[] = { 336,  };
	static constexpr int application_srgs_plus_xml[] = { 340,  };
	static constexpr int application_sru_plus_xml[] = { 917,  };
	static constexpr int application_ssdl_plus_xml[] = { 919,  };
	static constexpr int application_ssml_plus_xml[] = { 922,  };
	static constexpr int application_swid_plus_xml[] = { 951,  };
	static constexpr int application_tei_plus_xml[] = { 969, 970,  };
	static constexpr int application_thraud_plus_xml[] = { 975,  };
	static constexpr int application_timestamped_minus_data[] = { 993,  };
	static constexpr int application_toml[] = { 984,  };
	static constexpr int application_trig[] = { 990,  };
	static constexpr int application_ttml_plus_xml[] = { 998,  };
	static constexpr int application_ubjson[] = { 1009,  };
	static constexpr int application_urc_minus_ressheet_plus_xml[] = { 828,  };
	static constexpr int application_urc_minus_targetdesc_plus_xml[] = { 967,  };
	static constexpr int application_vnd_1000minds_decision_minus_model_plus_xml[] = { 1,  };
	static constexpr int application_vnd_3gpp_pic_minus_bw_minus_large[] = { 740,  };
	static constexpr int application_vnd_3gpp_pic_minus_bw_minus_small[] = { 768,  };
	static constexpr int application_vnd_3gpp_pic_minus_bw_minus_var[] = { 775,  };
	static constexpr int application_vnd_3gpp2_tcap[] = { 965,  };
	static constexpr int application_vnd_3m_post_minus_it_minus_notes[] = { 776,  };
	static constexpr int application_vnd_accpac_simply_aso[] = { 46,  };
	static constexpr int application_vnd_accpac_simply_imp[] = { 398,  };
	static constexpr int application_vnd_acucobol[] = { 19,  };
	static constexpr int application_vnd_acucorp[] = { 20, 48,  };
	static constexpr int application_vnd_adobe_air_minus_application_minus_installer_minus_package_plus_zip[] = { 31,  };
	static constexpr int application_vnd_adobe_formscentral_fcdt[] = { 274,  };
	static constexpr int application_vnd_adobe_fxp[] = { 306, 307,  };
	static constexpr int application_vnd_adobe_xdp_plus_xml[] = { 1151,  };
	static constexpr int application_vnd_adobe_xfdf[] = { 1157,  };
	static constexpr int application_vnd_age[] = { 25,  };
	static constexpr int application_vnd_ahead_space[] = { 26,  };
	static constexpr int application_vnd_airzip_filesecure_azf[] = { 60,  };
	static constexpr int application_vnd_airzip_filesecure_azs[] = { 61,  };
	static constexpr int application_vnd_amazon_ebook[] = { 63,  };
	static constexpr int application_vnd_americandynamics_acc[] = { 17,  };
	static constexpr int application_vnd_amiga_ami[] = { 33,  };
	static constexpr int application_vnd_android_package_minus_archive[] = { 35,  };
	static constexpr int application_vnd_anser_minus_web_minus_certificate_minus_issue_minus_initiation[] = { 130,  };
	static constexpr int application_vnd_anser_minus_web_minus_funds_minus_transfer_minus_initiation[] = { 304,  };
	static constexpr int application_vnd_antix_game_minus_component[] = { 53,  };
	static constexpr int application_vnd_apple_installer_plus_xml[] = { 586,  };
	static constexpr int application_vnd_apple_keynote[] = { 457,  };
	static constexpr int application_vnd_apple_mpegurl[] = { 508,  };
	static constexpr int application_vnd_apple_numbers[] = { 643,  };
	static constexpr int application_vnd_apple_pages[] = { 706,  };
	static constexpr int application_vnd_apple_pkpass[] = { 738,  };
	static constexpr int application_vnd_aristanetworks_swi[] = { 950,  };
	static constexpr int application_vnd_astraea_minus_software_iota[] = { 405,  };
	static constexpr int application_vnd_audiograph[] = { 22,  };
	static constexpr int application_vnd_balsamiq_bmml_plus_xml[] = { 77,  };
	static constexpr int application_vnd_blueice_multipass[] = { 587,  };
	static constexpr int application_vnd_bmi[] = { 76,  };
	static constexpr int application_vnd_businessobjects[] = { 802,  };
	static constexpr int application_vnd_chemdraw_plus_xml[] = { 121,  };
	static constexpr int application_vnd_chipnuts_karaoke_minus_mmd[] = { 559,  };
	static constexpr int application_vnd_cinderella[] = { 122,  };
	static constexpr int application_vnd_citationstyles_style_plus_xml[] = { 160,  };
	static constexpr int application_vnd_claymore[] = { 133,  };
	static constexpr int application_vnd_cloanto_rp9[] = { 820,  };
	static constexpr int application_vnd_clonk_c4group[] = { 92, 93, 94, 95, 96,  };
	static constexpr int application_vnd_cluetrust_cartomobile_minus_config[] = { 90,  };
	static constexpr int application_vnd_cluetrust_cartomobile_minus_config_minus_pkg[] = { 91,  };
	static constexpr int application_vnd_commonspace[] = { 162,  };
	static constexpr int application_vnd_contact_cmsg[] = { 111,  };
	static constexpr int application_vnd_cosmocaller[] = { 141,  };
	static constexpr int application_vnd_crick_clicker[] = { 139,  };
	static constexpr int application_vnd_crick_clicker_keyboard[] = { 135,  };
	static constexpr int application_vnd_crick_clicker_palette[] = { 136,  };
	static constexpr int application_vnd_crick_clicker_template[] = { 137,  };
	static constexpr int application_vnd_crick_clicker_wordbank[] = { 138,  };
	static constexpr int application_vnd_criticaltools_wbs_plus_xml[] = { 1089,  };
	static constexpr int application_vnd_ctc_minus_posml[] = { 745,  };
	static constexpr int application_vnd_cups_minus_ppd[] = { 753,  };
	static constexpr int application_vnd_curl_car[] = { 100,  };
	static constexpr int application_vnd_curl_pcurl[] = { 717,  };
	static constexpr int application_vnd_dart[] = { 173,  };
	static constexpr int application_vnd_data_minus_vision_rdz[] = { 800,  };
	static constexpr int application_vnd_dbf[] = { 176,  };
	static constexpr int application_vnd_dece_data[] = { 1025, 1026, 1037, 1038,  };
	static constexpr int application_vnd_dece_ttml_plus_xml[] = { 1033, 1045,  };
	static constexpr int application_vnd_dece_unspecified[] = { 1048, 1050,  };
	static constexpr int application_vnd_dece_zip[] = { 1049, 1051,  };
	static constexpr int application_vnd_denovo_fcselayout_minus_link[] = { 278,  };
	static constexpr int application_vnd_dna[] = { 205,  };
	static constexpr int application_vnd_dolby_mlp[] = { 558,  };
	static constexpr int application_vnd_dpgraph[] = { 213,  };
	static constexpr int application_vnd_dreamfactory[] = { 189,  };
	static constexpr int application_vnd_ds_minus_keypoint[] = { 468,  };
	static constexpr int application_vnd_dvb_ait[] = { 32,  };
	static constexpr int application_vnd_dvb_service[] = { 944,  };
	static constexpr int application_vnd_dynageo[] = { 319,  };
	static constexpr int application_vnd_ecowin_chart[] = { 518,  };
	static constexpr int application_vnd_enliven[] = { 633,  };
	static constexpr int application_vnd_epson_esf[] = { 254,  };
	static constexpr int application_vnd_epson_msf[] = { 600,  };
	static constexpr int application_vnd_epson_quickanime[] = { 779,  };
	static constexpr int application_vnd_epson_salt[] = { 896,  };
	static constexpr int application_vnd_epson_ssf[] = { 921,  };
	static constexpr int application_vnd_eszigno3_plus_xml[] = { 252, 255,  };
	static constexpr int application_vnd_ezpix_minus_album[] = { 267,  };
	static constexpr int application_vnd_ezpix_minus_package[] = { 268,  };
	static constexpr int application_vnd_fdf[] = { 276,  };
	static constexpr int application_vnd_fdsn_mseed[] = { 598,  };
	static constexpr int application_vnd_fdsn_seed[] = { 174, 856,  };
	static constexpr int application_vnd_flographit[] = { 332,  };
	static constexpr int application_vnd_fluxtime_clip[] = { 303,  };
	static constexpr int application_vnd_framemaker[] = { 80, 295, 300, 519,  };
	static constexpr int application_vnd_frogans_fnc[] = { 296,  };
	static constexpr int application_vnd_frogans_ltf[] = { 494,  };
	static constexpr int application_vnd_fsc_weblaunch[] = { 301,  };
	static constexpr int application_vnd_fujitsu_oasys[] = { 648,  };
	static constexpr int application_vnd_fujitsu_oasys2[] = { 646,  };
	static constexpr int application_vnd_fujitsu_oasys3[] = { 647,  };
	static constexpr int application_vnd_fujitsu_oasysgp[] = { 279,  };
	static constexpr int application_vnd_fujitsu_oasysprs[] = { 72,  };
	static constexpr int application_vnd_fujixerox_ddd[] = { 181,  };
	static constexpr int application_vnd_fujixerox_docuworks[] = { 1153,  };
	static constexpr int application_vnd_fujixerox_docuworks_binder[] = { 1145,  };
	static constexpr int application_vnd_fuzzysheet[] = { 308,  };
	static constexpr int application_vnd_genomatix_tuxedo[] = { 1001,  };
	static constexpr int application_vnd_geogebra_file[] = { 322,  };
	static constexpr int application_vnd_geogebra_tool[] = { 323,  };
	static constexpr int application_vnd_geometry_minus_explorer[] = { 321, 338,  };
	static constexpr int application_vnd_geonext[] = { 349,  };
	static constexpr int application_vnd_geoplan[] = { 309,  };
	static constexpr int application_vnd_geospace[] = { 311,  };
	static constexpr int application_vnd_gmx[] = { 330,  };
	static constexpr int application_vnd_google_minus_apps_document[] = { 317,  };
	static constexpr int application_vnd_google_minus_apps_presentation[] = { 343,  };
	static constexpr int application_vnd_google_minus_apps_spreadsheet[] = { 342,  };
	static constexpr int application_vnd_google_minus_earth_kml_plus_xml[] = { 461,  };
	static constexpr int application_vnd_google_minus_earth_kmz[] = { 462,  };
	static constexpr int application_vnd_grafeq[] = { 334, 335,  };
	static constexpr int application_vnd_groove_minus_account[] = { 312,  };
	static constexpr int application_vnd_groove_minus_help[] = { 324,  };
	static constexpr int application_vnd_groove_minus_identity_minus_message[] = { 326,  };
	static constexpr int application_vnd_groove_minus_injector[] = { 339,  };
	static constexpr int application_vnd_groove_minus_tool_minus_message[] = { 345,  };
	static constexpr int application_vnd_groove_minus_tool_minus_template[] = { 986,  };
	static constexpr int application_vnd_groove_minus_vcard[] = { 1057,  };
	static constexpr int application_vnd_hal_plus_xml[] = { 355,  };
	static constexpr int application_vnd_handheld_minus_entertainment_plus_xml[] = { 1219,  };
	static constexpr int application_vnd_hbci[] = { 356,  };
	static constexpr int application_vnd_hhe_lesson_minus_player[] = { 480,  };
	static constexpr int application_vnd_hp_minus_hpgl[] = { 369,  };
	static constexpr int application_vnd_hp_minus_hpid[] = { 370,  };
	static constexpr int application_vnd_hp_minus_hps[] = { 371,  };
	static constexpr int application_vnd_hp_minus_jlyt[] = { 425,  };
	static constexpr int application_vnd_hp_minus_pcl[] = { 714,  };
	static constexpr int application_vnd_hp_minus_pclxl[] = { 715,  };
	static constexpr int application_vnd_hydrostatix_sof_minus_data[] = { 865,  };
	static constexpr int application_vnd_ibm_minipay[] = { 592,  };
	static constexpr int application_vnd_ibm_modcap[] = { 24, 486, 487,  };
	static constexpr int application_vnd_ibm_rights_minus_management[] = { 408,  };
	static constexpr int application_vnd_ibm_secure_minus_container[] = { 840,  };
	static constexpr int application_vnd_iccprofile[] = { 382, 384,  };
	static constexpr int application_vnd_igloader[] = { 392,  };
	static constexpr int application_vnd_immervision_minus_ivp[] = { 414,  };
	static constexpr int application_vnd_immervision_minus_ivu[] = { 415,  };
	static constexpr int application_vnd_insors_igm[] = { 393,  };
	static constexpr int application_vnd_intercon_formnet[] = { 1188, 1189,  };
	static constexpr int application_vnd_intergeo[] = { 381,  };
	static constexpr int application_vnd_intu_qbo[] = { 780,  };
	static constexpr int application_vnd_intu_qfx[] = { 781,  };
	static constexpr int application_vnd_ipunplugged_rcprofile[] = { 798,  };
	static constexpr int application_vnd_irepository_package_plus_xml[] = { 409,  };
	static constexpr int application_vnd_is_minus_xpr[] = { 1186,  };
	static constexpr int application_vnd_isac_fcs[] = { 275,  };
	static constexpr int application_vnd_jam[] = { 418,  };
	static constexpr int application_vnd_jcp_javame_midlet_minus_rms[] = { 814,  };
	static constexpr int application_vnd_jisp[] = { 423,  };
	static constexpr int application_vnd_joost_joda_minus_archive[] = { 428,  };
	static constexpr int application_vnd_kahootz[] = { 470, 473,  };
	static constexpr int application_vnd_kde_karbon[] = { 455,  };
	static constexpr int application_vnd_kde_kchart[] = { 128,  };
	static constexpr int application_vnd_kde_kformula[] = { 459,  };
	static constexpr int application_vnd_kde_kivio[] = { 292,  };
	static constexpr int application_vnd_kde_kontour[] = { 465,  };
	static constexpr int application_vnd_kde_kpresenter[] = { 466, 467,  };
	static constexpr int application_vnd_kde_kspread[] = { 469,  };
	static constexpr int application_vnd_kde_kword[] = { 474, 475,  };
	static constexpr int application_vnd_kenameaapp[] = { 375,  };
	static constexpr int application_vnd_kidspiration[] = { 460,  };
	static constexpr int application_vnd_kinar[] = { 463, 464,  };
	static constexpr int application_vnd_koan[] = { 887, 888, 889, 890,  };
	static constexpr int application_vnd_kodak_minus_descriptor[] = { 920,  };
	static constexpr int application_vnd_las_las_plus_xml[] = { 476,  };
	static constexpr int application_vnd_llamagraphics_life_minus_balance_desktop[] = { 478,  };
	static constexpr int application_vnd_llamagraphics_life_minus_balance_exchange_plus_xml[] = { 479,  };
	static constexpr int application_vnd_lotus_minus_1_minus_2_minus_3[] = { 0,  };
	static constexpr int application_vnd_lotus_minus_approach[] = { 39,  };
	static constexpr int application_vnd_lotus_minus_freelance[] = { 764,  };
	static constexpr int application_vnd_lotus_minus_notes[] = { 640,  };
	static constexpr int application_vnd_lotus_minus_organizer[] = { 678,  };
	static constexpr int application_vnd_lotus_minus_screencam[] = { 842,  };
	static constexpr int application_vnd_lotus_minus_wordpro[] = { 498,  };
	static constexpr int application_vnd_macports_portpkg[] = { 748,  };
	static constexpr int application_vnd_mapbox_minus_vector_minus_tile[] = { 615,  };
	static constexpr int application_vnd_mcd[] = { 530,  };
	static constexpr int application_vnd_medcalcdata[] = { 529,  };
	static constexpr int application_vnd_mediastation_cdkey[] = { 114,  };
	static constexpr int application_vnd_mfer[] = { 616,  };
	static constexpr int application_vnd_mfmp[] = { 541,  };
	static constexpr int application_vnd_micrografx_flo[] = { 290,  };
	static constexpr int application_vnd_micrografx_igx[] = { 395,  };
	static constexpr int application_vnd_mif[] = { 548,  };
	static constexpr int application_vnd_mobius_daf[] = { 172,  };
	static constexpr int application_vnd_mobius_dis[] = { 193,  };
	static constexpr int application_vnd_mobius_mbk[] = { 527,  };
	static constexpr int application_vnd_mobius_mqy[] = { 593,  };
	static constexpr int application_vnd_mobius_msl[] = { 605,  };
	static constexpr int application_vnd_mobius_plc[] = { 741,  };
	static constexpr int application_vnd_mobius_txf[] = { 1002,  };
	static constexpr int application_vnd_mophun_application[] = { 588,  };
	static constexpr int application_vnd_mophun_certificate[] = { 578,  };
	static constexpr int application_vnd_mozilla_xul_plus_xml[] = { 1196,  };
	static constexpr int application_vnd_ms_minus_artgalry[] = { 131,  };
	static constexpr int application_vnd_ms_minus_cab_minus_compressed[] = { 97,  };
	static constexpr int application_vnd_ms_minus_excel[] = { 1163, 1165, 1168, 1169, 1173, 1176,  };
	static constexpr int application_vnd_ms_minus_excel_addin_macroenabled_12[] = { 1164,  };
	static constexpr int application_vnd_ms_minus_excel_sheet_binary_macroenabled_12[] = { 1170,  };
	static constexpr int application_vnd_ms_minus_excel_sheet_macroenabled_12[] = { 1171,  };
	static constexpr int application_vnd_ms_minus_excel_template_macroenabled_12[] = { 1174,  };
	static constexpr int application_vnd_ms_minus_fontobject[] = { 248,  };
	static constexpr int application_vnd_ms_minus_htmlhelp[] = { 127,  };
	static constexpr int application_vnd_ms_minus_ims[] = { 399,  };
	static constexpr int application_vnd_ms_minus_lrm[] = { 493,  };
	static constexpr int application_vnd_ms_minus_officetheme[] = { 979,  };
	static constexpr int application_vnd_ms_minus_outlook[] = { 601,  };
	static constexpr int application_vnd_ms_minus_pki_seccat[] = { 101,  };
	static constexpr int application_vnd_ms_minus_pki_stl[] = { 929,  };
	static constexpr int application_vnd_ms_minus_powerpoint[] = { 749, 755, 758,  };
	static constexpr int application_vnd_ms_minus_powerpoint_addin_macroenabled_12[] = { 752,  };
	static constexpr int application_vnd_ms_minus_powerpoint_presentation_macroenabled_12[] = { 759,  };
	static constexpr int application_vnd_ms_minus_powerpoint_slide_macroenabled_12[] = { 891,  };
	static constexpr int application_vnd_ms_minus_powerpoint_slideshow_macroenabled_12[] = { 756,  };
	static constexpr int application_vnd_ms_minus_powerpoint_template_macroenabled_12[] = { 750,  };
	static constexpr int application_vnd_ms_minus_project[] = { 589, 591,  };
	static constexpr int application_vnd_ms_minus_word_document_macroenabled_12[] = { 207,  };
	static constexpr int application_vnd_ms_minus_word_template_macroenabled_12[] = { 210,  };
	static constexpr int application_vnd_ms_minus_works[] = { 1091, 1092, 1102, 1120,  };
	static constexpr int application_vnd_ms_minus_wpl[] = { 1119,  };
	static constexpr int application_vnd_ms_minus_xpsdocument[] = { 1187,  };
	static constexpr int application_vnd_mseq[] = { 599,  };
	static constexpr int application_vnd_musician[] = { 611,  };
	static constexpr int application_vnd_muvee_style[] = { 608,  };
	static constexpr int application_vnd_mynfc[] = { 961,  };
	static constexpr int application_vnd_neurolanguage_nlu[] = { 632,  };
	static constexpr int application_vnd_nitf[] = { 631, 642,  };
	static constexpr int application_vnd_noblenet_minus_directory[] = { 634,  };
	static constexpr int application_vnd_noblenet_minus_sealer[] = { 635,  };
	static constexpr int application_vnd_noblenet_minus_web[] = { 636,  };
	static constexpr int application_vnd_nokia_n_minus_gage_ac_plus_xml[] = { 15,  };
	static constexpr int application_vnd_nokia_n_minus_gage_data[] = { 630,  };
	static constexpr int application_vnd_nokia_n_minus_gage_symbian_install[] = { 623,  };
	static constexpr int application_vnd_nokia_radio_minus_preset[] = { 823,  };
	static constexpr int application_vnd_nokia_radio_minus_presets[] = { 822,  };
	static constexpr int application_vnd_novadigm_edm[] = { 236,  };
	static constexpr int application_vnd_novadigm_edx[] = { 237,  };
	static constexpr int application_vnd_novadigm_ext[] = { 265,  };
	static constexpr int application_vnd_oasis_opendocument_chart[] = { 655,  };
	static constexpr int application_vnd_oasis_opendocument_chart_minus_template[] = { 683,  };
	static constexpr int application_vnd_oasis_opendocument_database[] = { 654,  };
	static constexpr int application_vnd_oasis_opendocument_formula[] = { 656,  };
	static constexpr int application_vnd_oasis_opendocument_formula_minus_template[] = { 657,  };
	static constexpr int application_vnd_oasis_opendocument_graphics[] = { 658,  };
	static constexpr int application_vnd_oasis_opendocument_graphics_minus_template[] = { 685,  };
	static constexpr int application_vnd_oasis_opendocument_image[] = { 659,  };
	static constexpr int application_vnd_oasis_opendocument_image_minus_template[] = { 687,  };
	static constexpr int application_vnd_oasis_opendocument_presentation[] = { 661,  };
	static constexpr int application_vnd_oasis_opendocument_presentation_minus_template[] = { 688,  };
	static constexpr int application_vnd_oasis_opendocument_spreadsheet[] = { 662,  };
	static constexpr int application_vnd_oasis_opendocument_spreadsheet_minus_template[] = { 689,  };
	static constexpr int application_vnd_oasis_opendocument_text[] = { 663,  };
	static constexpr int application_vnd_oasis_opendocument_text_minus_master[] = { 660,  };
	static constexpr int application_vnd_oasis_opendocument_text_minus_template[] = { 690,  };
	static constexpr int application_vnd_oasis_opendocument_text_minus_web[] = { 686,  };
	static constexpr int application_vnd_olpc_minus_sugar[] = { 1181,  };
	static constexpr int application_vnd_oma_dd2_plus_xml[] = { 180,  };
	static constexpr int application_vnd_openblox_game_plus_xml[] = { 650,  };
	static constexpr int application_vnd_openofficeorg_extension[] = { 695,  };
	static constexpr int application_vnd_openstreetmap_data_plus_xml[] = { 682,  };
	static constexpr int application_vnd_openxmlformats_minus_officedocument_presentationml_presentation[] = { 760,  };
	static constexpr int application_vnd_openxmlformats_minus_officedocument_presentationml_slide[] = { 892,  };
	static constexpr int application_vnd_openxmlformats_minus_officedocument_presentationml_slideshow[] = { 757,  };
	static constexpr int application_vnd_openxmlformats_minus_officedocument_presentationml_template[] = { 751,  };
	static constexpr int application_vnd_openxmlformats_minus_officedocument_spreadsheetml_sheet[] = { 1172,  };
	static constexpr int application_vnd_openxmlformats_minus_officedocument_spreadsheetml_template[] = { 1175,  };
	static constexpr int application_vnd_openxmlformats_minus_officedocument_wordprocessingml_document[] = { 208,  };
	static constexpr int application_vnd_openxmlformats_minus_officedocument_wordprocessingml_template[] = { 211,  };
	static constexpr int application_vnd_osgeo_mapguide_package[] = { 543,  };
	static constexpr int application_vnd_osgi_dp[] = { 212,  };
	static constexpr int application_vnd_osgi_subsystem[] = { 253,  };
	static constexpr int application_vnd_palm[] = { 676, 720, 761,  };
	static constexpr int application_vnd_pawaafile[] = { 709,  };
	static constexpr int application_vnd_pg_format[] = { 934,  };
	static constexpr int application_vnd_pg_osasli[] = { 239,  };
	static constexpr int application_vnd_picsel[] = { 238,  };
	static constexpr int application_vnd_pmi_widget[] = { 1099,  };
	static constexpr int application_vnd_pocketlearn[] = { 742,  };
	static constexpr int application_vnd_powerbuilder6[] = { 710,  };
	static constexpr int application_vnd_previewsystems_box[] = { 81,  };
	static constexpr int application_vnd_proteus_magazine[] = { 544,  };
	static constexpr int application_vnd_publishare_minus_delta_minus_tree[] = { 782,  };
	static constexpr int application_vnd_pvi_ptid1[] = { 773,  };
	static constexpr int application_vnd_quark_quarkxpress[] = { 784, 785, 786, 787, 788, 789,  };
	static constexpr int application_vnd_rar[] = { 795,  };
	static constexpr int application_vnd_realvnc_bed[] = { 71,  };
	static constexpr int application_vnd_recordare_musicxml[] = { 618,  };
	static constexpr int application_vnd_recordare_musicxml_plus_xml[] = { 613,  };
	static constexpr int application_vnd_rig_cryptonote[] = { 158,  };
	static constexpr int application_vnd_rim_cod[] = { 146,  };
	static constexpr int application_vnd_rn_minus_realmedia[] = { 811,  };
	static constexpr int application_vnd_rn_minus_realmedia_minus_vbr[] = { 815,  };
	static constexpr int application_vnd_route66_link66_plus_xml[] = { 484,  };
	static constexpr int application_vnd_sailingtracker_track[] = { 923,  };
	static constexpr int application_vnd_seemail[] = { 855,  };
	static constexpr int application_vnd_sema[] = { 857,  };
	static constexpr int application_vnd_semd[] = { 858,  };
	static constexpr int application_vnd_semf[] = { 859,  };
	static constexpr int application_vnd_shana_informed_formdata[] = { 390,  };
	static constexpr int application_vnd_shana_informed_formtemplate[] = { 412,  };
	static constexpr int application_vnd_shana_informed_interchange[] = { 396,  };
	static constexpr int application_vnd_shana_informed_package[] = { 407,  };
	static constexpr int application_vnd_simtech_minus_mindmapper[] = { 999, 1000,  };
	static constexpr int application_vnd_smaf[] = { 560,  };
	static constexpr int application_vnd_smart_teacher[] = { 968,  };
	static constexpr int application_vnd_software602_filler_form_plus_xml[] = { 297,  };
	static constexpr int application_vnd_solent_sdkm_plus_xml[] = { 850, 851,  };
	static constexpr int application_vnd_spotfire_dxp[] = { 229,  };
	static constexpr int application_vnd_spotfire_sfs[] = { 866,  };
	static constexpr int application_vnd_stardivision_calc[] = { 848,  };
	static constexpr int application_vnd_stardivision_draw[] = { 847,  };
	static constexpr int application_vnd_stardivision_impress[] = { 849,  };
	static constexpr int application_vnd_stardivision_math[] = { 898,  };
	static constexpr int application_vnd_stardivision_writer[] = { 853, 1067,  };
	static constexpr int application_vnd_stardivision_writer_minus_global[] = { 869,  };
	static constexpr int application_vnd_stepmania_package[] = { 902,  };
	static constexpr int application_vnd_stepmania_stepchart[] = { 897,  };
	static constexpr int application_vnd_sun_wadl_plus_xml[] = { 1081,  };
	static constexpr int application_vnd_sun_xml_calc[] = { 952,  };
	static constexpr int application_vnd_sun_xml_calc_template[] = { 924,  };
	static constexpr int application_vnd_sun_xml_draw[] = { 953,  };
	static constexpr int application_vnd_sun_xml_draw_template[] = { 925,  };
	static constexpr int application_vnd_sun_xml_impress[] = { 955,  };
	static constexpr int application_vnd_sun_xml_impress_template[] = { 927,  };
	static constexpr int application_vnd_sun_xml_math[] = { 956,  };
	static constexpr int application_vnd_sun_xml_writer[] = { 957,  };
	static constexpr int application_vnd_sun_xml_writer_global[] = { 954,  };
	static constexpr int application_vnd_sun_xml_writer_template[] = { 935,  };
	static constexpr int application_vnd_sus_minus_calendar[] = { 940, 941,  };
	static constexpr int application_vnd_svd[] = { 945,  };
	static constexpr int application_vnd_symbian_install[] = { 882, 883,  };
	static constexpr int application_vnd_syncml_plus_xml[] = { 1194,  };
	static constexpr int application_vnd_syncml_dm_plus_wbxml[] = { 68,  };
	static constexpr int application_vnd_syncml_dm_plus_xml[] = { 1150,  };
	static constexpr int application_vnd_syncml_dmddf_plus_xml[] = { 182,  };
	static constexpr int application_vnd_tao_intent_minus_module_minus_archive[] = { 962,  };
	static constexpr int application_vnd_tcpdump_pcap[] = { 99, 203, 712,  };
	static constexpr int application_vnd_tmobile_minus_livetv[] = { 983,  };
	static constexpr int application_vnd_trid_tpt[] = { 987,  };
	static constexpr int application_vnd_triscape_mxs[] = { 621,  };
	static constexpr int application_vnd_trueapp[] = { 989,  };
	static constexpr int application_vnd_ufdl[] = { 1011, 1012,  };
	static constexpr int application_vnd_uiq_theme[] = { 1022,  };
	static constexpr int application_vnd_umajin[] = { 1014,  };
	static constexpr int application_vnd_unity[] = { 1015,  };
	static constexpr int application_vnd_uoml_plus_xml[] = { 1016,  };
	static constexpr int application_vnd_vcx[] = { 1059,  };
	static constexpr int application_vnd_visio[] = { 1070, 1072, 1073, 1074,  };
	static constexpr int application_vnd_visionary[] = { 1063,  };
	static constexpr int application_vnd_vsf[] = { 1071,  };
	static constexpr int application_vnd_wap_wbxml[] = { 1090,  };
	static constexpr int application_vnd_wap_wmlc[] = { 1109,  };
	static constexpr int application_vnd_wap_wmlscriptc[] = { 1111,  };
	static constexpr int application_vnd_webturbo[] = { 1127,  };
	static constexpr int application_vnd_wolfram_player[] = { 626,  };
	static constexpr int application_vnd_wordperfect[] = { 1118,  };
	static constexpr int application_vnd_wqd[] = { 1121,  };
	static constexpr int application_vnd_wt_stf[] = { 926,  };
	static constexpr int application_vnd_xara[] = { 1142,  };
	static constexpr int application_vnd_xfdl[] = { 1158,  };
	static constexpr int application_vnd_yamaha_hv_minus_dic[] = { 378,  };
	static constexpr int application_vnd_yamaha_hv_minus_script[] = { 380,  };
	static constexpr int application_vnd_yamaha_hv_minus_voice[] = { 379,  };
	static constexpr int application_vnd_yamaha_openscoreformat[] = { 680,  };
	static constexpr int application_vnd_yamaha_openscoreformat_osfpvg_plus_xml[] = { 681,  };
	static constexpr int application_vnd_yamaha_smaf_minus_audio[] = { 837,  };
	static constexpr int application_vnd_yamaha_smaf_minus_phrase[] = { 908,  };
	static constexpr int application_vnd_yellowriver_minus_custom_minus_menu[] = { 144,  };
	static constexpr int application_vnd_zul[] = { 1217, 1218,  };
	static constexpr int application_vnd_zzazz_deck_plus_xml[] = { 1215,  };
	static constexpr int application_voicexml_plus_xml[] = { 1078,  };
	static constexpr int application_wasm[] = { 1083,  };
	static constexpr int application_watcherinfo_plus_xml[] = { 1101,  };
	static constexpr int application_widget[] = { 1100,  };
	static constexpr int application_winhlp[] = { 368,  };
	static constexpr int application_wsdl_plus_xml[] = { 1125,  };
	static constexpr int application_wspolicy_plus_xml[] = { 1126,  };
	static constexpr int application_x_minus_7z_minus_compressed[] = { 9,  };
	static constexpr int application_x_minus_abiword[] = { 14,  };
	static constexpr int application_x_minus_ace_minus_compressed[] = { 18,  };
	static constexpr int application_x_minus_apple_minus_diskimage[] = { 201,  };
	static constexpr int application_x_minus_arj[] = { 41,  };
	static constexpr int application_x_minus_authorware_minus_bin[] = { 10, 1004, 1068, 1129,  };
	static constexpr int application_x_minus_authorware_minus_map[] = { 12,  };
	static constexpr int application_x_minus_authorware_minus_seg[] = { 13,  };
	static constexpr int application_x_minus_bcpio[] = { 66,  };
	static constexpr int application_x_minus_bdoc[] = { 69,  };
	static constexpr int application_x_minus_bittorrent[] = { 985,  };
	static constexpr int application_x_minus_blorb[] = { 74, 75,  };
	static constexpr int application_x_minus_bzip[] = { 87,  };
	static constexpr int application_x_minus_bzip2[] = { 82, 88,  };
	static constexpr int application_x_minus_cbr[] = { 102, 103, 104, 105, 106,  };
	static constexpr int application_x_minus_cdlink[] = { 1055,  };
	static constexpr int application_x_minus_cfs_minus_compressed[] = { 124,  };
	static constexpr int application_x_minus_chat[] = { 126,  };
	static constexpr int application_x_minus_chess_minus_pgn[] = { 731,  };
	static constexpr int application_x_minus_chrome_minus_extension[] = { 157,  };
	static constexpr int application_x_minus_cocoa[] = { 108,  };
	static constexpr int application_x_minus_conference[] = { 639,  };
	static constexpr int application_x_minus_cpio[] = { 150,  };
	static constexpr int application_x_minus_csh[] = { 159,  };
	static constexpr int application_x_minus_debian_minus_package[] = { 184, 1010,  };
	static constexpr int application_x_minus_dgc_minus_compressed[] = { 190,  };
	static constexpr int application_x_minus_director[] = { 109, 164, 169, 178, 192, 230, 280, 948, 1079,  };
	static constexpr int application_x_minus_doom[] = { 1080,  };
	static constexpr int application_x_minus_dtbncx_plus_xml[] = { 628,  };
	static constexpr int application_x_minus_dtbook_plus_xml[] = { 218,  };
	static constexpr int application_x_minus_dtbresource_plus_xml[] = { 803,  };
	static constexpr int application_x_minus_dvi[] = { 224,  };
	static constexpr int application_x_minus_envoy[] = { 258,  };
	static constexpr int application_x_minus_eva[] = { 257,  };
	static constexpr int application_x_minus_font_minus_bdf[] = { 67,  };
	static constexpr int application_x_minus_font_minus_ghostscript[] = { 341,  };
	static constexpr int application_x_minus_font_minus_linux_minus_psf[] = { 770,  };
	static constexpr int application_x_minus_font_minus_pcf[] = { 713,  };
	static constexpr int application_x_minus_font_minus_snf[] = { 904,  };
	static constexpr int application_x_minus_font_minus_type1[] = { 23, 725, 726, 727,  };
	static constexpr int application_x_minus_freearc[] = { 40,  };
	static constexpr int application_x_minus_futuresplash[] = { 909,  };
	static constexpr int application_x_minus_gca_minus_compressed[] = { 315,  };
	static constexpr int application_x_minus_glulx[] = { 1013,  };
	static constexpr int application_x_minus_gnumeric[] = { 331,  };
	static constexpr int application_x_minus_gramps_minus_xml[] = { 337,  };
	static constexpr int application_x_minus_gtar[] = { 344,  };
	static constexpr int application_x_minus_hdf[] = { 359,  };
	static constexpr int application_x_minus_httpd_minus_php[] = { 733,  };
	static constexpr int application_x_minus_install_minus_instructions[] = { 404,  };
	static constexpr int application_x_minus_iso9660_minus_image[] = { 410,  };
	static constexpr int application_x_minus_iwork_minus_keynote_minus_sffkey[] = { 457,  };
	static constexpr int application_x_minus_iwork_minus_numbers_minus_sffnumbers[] = { 643,  };
	static constexpr int application_x_minus_iwork_minus_pages_minus_sffpages[] = { 706,  };
	static constexpr int application_x_minus_java_minus_archive_minus_diff[] = { 420,  };
	static constexpr int application_x_minus_java_minus_jnlp_minus_file[] = { 427,  };
	static constexpr int application_x_minus_keepass2[] = { 456,  };
	static constexpr int application_x_minus_latex[] = { 477,  };
	static constexpr int application_x_minus_lua_minus_bytecode[] = { 496,  };
	static constexpr int application_x_minus_lzh_minus_compressed[] = { 483, 499,  };
	static constexpr int application_x_minus_makeself[] = { 833,  };
	static constexpr int application_x_minus_mie[] = { 547,  };
	static constexpr int application_x_minus_mobipocket_minus_ebook[] = { 565, 762,  };
	static constexpr int application_x_minus_ms_minus_application[] = { 38,  };
	static constexpr int application_x_minus_ms_minus_shortcut[] = { 489,  };
	static constexpr int application_x_minus_ms_minus_wmd[] = { 1105,  };
	static constexpr int application_x_minus_ms_minus_wmz[] = { 1114,  };
	static constexpr int application_x_minus_ms_minus_xbap[] = { 1144,  };
	static constexpr int application_x_minus_msaccess[] = { 533,  };
	static constexpr int application_x_minus_msbinder[] = { 649,  };
	static constexpr int application_x_minus_mscardfile[] = { 154,  };
	static constexpr int application_x_minus_msclip[] = { 140,  };
	static constexpr int application_x_minus_msdos_minus_program[] = { 259,  };
	static constexpr int application_x_minus_msdownload[] = { 65, 148, 199, 259, 603,  };
	static constexpr int application_x_minus_msmediaview[] = { 500, 501, 614,  };
	static constexpr int application_x_minus_msmetafile[] = { 241, 246, 1106, 1114,  };
	static constexpr int application_x_minus_msmoney[] = { 564,  };
	static constexpr int application_x_minus_mspublisher[] = { 774,  };
	static constexpr int application_x_minus_msschedule[] = { 841,  };
	static constexpr int application_x_minus_msterminal[] = { 991,  };
	static constexpr int application_x_minus_mswrite[] = { 1122,  };
	static constexpr int application_x_minus_netcdf[] = { 112, 627,  };
	static constexpr int application_x_minus_ns_minus_proxy_minus_autoconfig[] = { 705,  };
	static constexpr int application_x_minus_nzb[] = { 645,  };
	static constexpr int application_x_minus_perl[] = { 739, 744,  };
	static constexpr int application_x_minus_pilot[] = { 720, 762,  };
	static constexpr int application_x_minus_pkcs12[] = { 698, 729,  };
	static constexpr int application_x_minus_pkcs7_minus_certificates[] = { 699, 906,  };
	static constexpr int application_x_minus_pkcs7_minus_certreqresp[] = { 702,  };
	static constexpr int application_x_minus_rar_minus_compressed[] = { 795,  };
	static constexpr int application_x_minus_redhat_minus_package_minus_manager[] = { 821,  };
	static constexpr int application_x_minus_research_minus_info_minus_systems[] = { 807,  };
	static constexpr int application_x_minus_sea[] = { 854,  };
	static constexpr int application_x_minus_sh[] = { 872,  };
	static constexpr int application_x_minus_shar[] = { 873,  };
	static constexpr int application_x_minus_shockwave_minus_flash[] = { 949,  };
	static constexpr int application_x_minus_silverlight_minus_app[] = { 1141,  };
	static constexpr int application_x_minus_sql[] = { 914,  };
	static constexpr int application_x_minus_stuffit[] = { 884,  };
	static constexpr int application_x_minus_stuffitx[] = { 885,  };
	static constexpr int application_x_minus_subrip[] = { 916,  };
	static constexpr int application_x_minus_sv4cpio[] = { 942,  };
	static constexpr int application_x_minus_sv4crc[] = { 943,  };
	static constexpr int application_x_minus_t3vm_minus_image[] = { 959,  };
	static constexpr int application_x_minus_tads[] = { 313,  };
	static constexpr int application_x_minus_tar[] = { 964,  };
	static constexpr int application_x_minus_tcl[] = { 966, 982,  };
	static constexpr int application_x_minus_tex[] = { 971,  };
	static constexpr int application_x_minus_tex_minus_tfm[] = { 976,  };
	static constexpr int application_x_minus_texinfo[] = { 972, 973,  };
	static constexpr int application_x_minus_tgif[] = { 651,  };
	static constexpr int application_x_minus_ustar[] = { 1021,  };
	static constexpr int application_x_minus_virtualbox_minus_hdd[] = { 358,  };
	static constexpr int application_x_minus_virtualbox_minus_ova[] = { 691,  };
	static constexpr int application_x_minus_virtualbox_minus_ovf[] = { 692,  };
	static constexpr int application_x_minus_virtualbox_minus_vbox[] = { 1052,  };
	static constexpr int application_x_minus_virtualbox_minus_vbox_minus_extpack[] = { 1053,  };
	static constexpr int application_x_minus_virtualbox_minus_vdi[] = { 1060,  };
	static constexpr int application_x_minus_virtualbox_minus_vhd[] = { 1062,  };
	static constexpr int application_x_minus_virtualbox_minus_vmdk[] = { 1065,  };
	static constexpr int application_x_minus_wais_minus_source[] = { 915,  };
	static constexpr int application_x_minus_web_minus_app_minus_manifest_plus_json[] = { 1095,  };
	static constexpr int application_x_minus_x509_minus_ca_minus_cert[] = { 156, 188, 724,  };
	static constexpr int application_x_minus_xfig[] = { 286,  };
	static constexpr int application_x_minus_xliff_plus_xml[] = { 1166,  };
	static constexpr int application_x_minus_xpinstall[] = { 1183,  };
	static constexpr int application_x_minus_xz[] = { 1201,  };
	static constexpr int application_x_minus_zmachine[] = { 1207, 1208, 1209, 1210, 1211, 1212, 1213, 1214,  };
	static constexpr int application_xaml_plus_xml[] = { 1140,  };
	static constexpr int application_xcap_minus_att_plus_xml[] = { 1143,  };
	static constexpr int application_xcap_minus_caps_plus_xml[] = { 1147,  };
	static constexpr int application_xcap_minus_diff_plus_xml[] = { 1149,  };
	static constexpr int application_xcap_minus_el_plus_xml[] = { 1154,  };
	static constexpr int application_xcap_minus_ns_plus_xml[] = { 1180,  };
	static constexpr int application_xenc_plus_xml[] = { 1155,  };
	static constexpr int application_xhtml_plus_xml[] = { 1159, 1160,  };
	static constexpr int application_xliff_plus_xml[] = { 1166,  };
	static constexpr int application_xml[] = { 817, 1178, 1190, 1191,  };
	static constexpr int application_xml_minus_dtd[] = { 219,  };
	static constexpr int application_xop_plus_xml[] = { 1182,  };
	static constexpr int application_xproc_plus_xml[] = { 1184,  };
	static constexpr int application_xslt_plus_xml[] = { 1191, 1193,  };
	static constexpr int application_xspf_plus_xml[] = { 1195,  };
	static constexpr int application_xv_plus_xml[] = { 620, 1161, 1197, 1198,  };
	static constexpr int application_yang[] = { 1203,  };
	static constexpr int application_yin_plus_xml[] = { 1204,  };
	static constexpr int application_zip[] = { 1216,  };
	static constexpr int audio_3gpp[] = { 6,  };
	static constexpr int audio_adpcm[] = { 21,  };
	static constexpr int audio_amr[] = { 34,  };
	static constexpr int audio_basic[] = { 54, 903,  };
	static constexpr int audio_midi[] = { 454, 545, 546, 812,  };
	static constexpr int audio_mobile_minus_xmf[] = { 619,  };
	static constexpr int audio_mp3[] = { 572,  };
	static constexpr int audio_mp4[] = { 509, 575,  };
	static constexpr int audio_mpeg[] = { 504, 506, 569, 571, 572, 585,  };
	static constexpr int audio_ogg[] = { 664, 666, 677, 913,  };
	static constexpr int audio_s3m[] = { 836,  };
	static constexpr int audio_silk[] = { 880,  };
	static constexpr int audio_vnd_dece_audio[] = { 1024, 1036,  };
	static constexpr int audio_vnd_digital_minus_winds[] = { 247,  };
	static constexpr int audio_vnd_dra[] = { 214,  };
	static constexpr int audio_vnd_dts[] = { 220,  };
	static constexpr int audio_vnd_dts_hd[] = { 221,  };
	static constexpr int audio_vnd_lucent_voice[] = { 497,  };
	static constexpr int audio_vnd_ms_minus_playready_media_pya[] = { 777,  };
	static constexpr int audio_vnd_nuera_ecelp4800[] = { 232,  };
	static constexpr int audio_vnd_nuera_ecelp7470[] = { 233,  };
	static constexpr int audio_vnd_nuera_ecelp9600[] = { 234,  };
	static constexpr int audio_vnd_rip[] = { 806,  };
	static constexpr int audio_wav[] = { 1084,  };
	static constexpr int audio_wave[] = { 1084,  };
	static constexpr int audio_webm[] = { 1094,  };
	static constexpr int audio_x_minus_aac[] = { 11,  };
	static constexpr int audio_x_minus_aiff[] = { 28, 29, 30,  };
	static constexpr int audio_x_minus_caf[] = { 98,  };
	static constexpr int audio_x_minus_flac[] = { 288,  };
	static constexpr int audio_x_minus_m4a[] = { 509,  };
	static constexpr int audio_x_minus_matroska[] = { 554,  };
	static constexpr int audio_x_minus_mpegurl[] = { 507,  };
	static constexpr int audio_x_minus_ms_minus_wax[] = { 1087,  };
	static constexpr int audio_x_minus_ms_minus_wma[] = { 1104,  };
	static constexpr int audio_x_minus_pn_minus_realaudio[] = { 790, 792,  };
	static constexpr int audio_x_minus_pn_minus_realaudio_minus_plugin[] = { 813,  };
	static constexpr int audio_x_minus_realaudio[] = { 790,  };
	static constexpr int audio_x_minus_wav[] = { 1084,  };
	static constexpr int audio_xm[] = { 1177,  };
	static constexpr int chemical_x_minus_cdx[] = { 120,  };
	static constexpr int chemical_x_minus_cif[] = { 129,  };
	static constexpr int chemical_x_minus_cmdf[] = { 142,  };
	static constexpr int chemical_x_minus_cml[] = { 143,  };
	static constexpr int chemical_x_minus_csml[] = { 161,  };
	static constexpr int chemical_x_minus_xyz[] = { 1200,  };
	static constexpr int font_collection[] = { 995,  };
	static constexpr int font_otf[] = { 684,  };
	static constexpr int font_ttf[] = { 996,  };
	static constexpr int font_woff[] = { 1116,  };
	static constexpr int font_woff2[] = { 1117,  };
	static constexpr int image_aces[] = { 264,  };
	static constexpr int image_apng[] = { 36,  };
	static constexpr int image_avci[] = { 55,  };
	static constexpr int image_avcs[] = { 56,  };
	static constexpr int image_avif[] = { 58,  };
	static constexpr int image_bmp[] = { 78,  };
	static constexpr int image_cgm[] = { 125,  };
	static constexpr int image_dicom_minus_rle[] = { 215,  };
	static constexpr int image_emf[] = { 241,  };
	static constexpr int image_fits[] = { 287,  };
	static constexpr int image_g3fax[] = { 310,  };
	static constexpr int image_gif[] = { 325,  };
	static constexpr int image_heic[] = { 360,  };
	static constexpr int image_heic_minus_sequence[] = { 361,  };
	static constexpr int image_heif[] = { 362,  };
	static constexpr int image_heif_minus_sequence[] = { 363,  };
	static constexpr int image_hej2k[] = { 364,  };
	static constexpr int image_hsj2[] = { 373,  };
	static constexpr int image_ief[] = { 388,  };
	static constexpr int image_jls[] = { 424,  };
	static constexpr int image_jp2[] = { 429, 434,  };
	static constexpr int image_jpeg[] = { 430, 431, 433,  };
	static constexpr int image_jph[] = { 437,  };
	static constexpr int image_jphc[] = { 422,  };
	static constexpr int image_jpm[] = { 438,  };
	static constexpr int image_jpx[] = { 432, 440,  };
	static constexpr int image_jxr[] = { 447,  };
	static constexpr int image_jxra[] = { 448,  };
	static constexpr int image_jxrs[] = { 449,  };
	static constexpr int image_jxs[] = { 450,  };
	static constexpr int image_jxsc[] = { 451,  };
	static constexpr int image_jxsi[] = { 452,  };
	static constexpr int image_jxss[] = { 453,  };
	static constexpr int image_ktx[] = { 471,  };
	static constexpr int image_ktx2[] = { 472,  };
	static constexpr int image_png[] = { 746,  };
	static constexpr int image_prs_btif[] = { 85,  };
	static constexpr int image_prs_pti[] = { 772,  };
	static constexpr int image_sgi[] = { 868,  };
	static constexpr int image_svg_plus_xml[] = { 946, 947,  };
	static constexpr int image_t38[] = { 960,  };
	static constexpr int image_tiff[] = { 980, 981,  };
	static constexpr int image_tiff_minus_fx[] = { 977,  };
	static constexpr int image_vnd_adobe_photoshop[] = { 769,  };
	static constexpr int image_vnd_airzip_accelerator_azv[] = { 62,  };
	static constexpr int image_vnd_dece_graphic[] = { 1027, 1029, 1039, 1041,  };
	static constexpr int image_vnd_djvu[] = { 197, 198,  };
	static constexpr int image_vnd_dvb_subtitle[] = { 938,  };
	static constexpr int image_vnd_dwg[] = { 227,  };
	static constexpr int image_vnd_dxf[] = { 228,  };
	static constexpr int image_vnd_fastbidsheet[] = { 273,  };
	static constexpr int image_vnd_fpx[] = { 299,  };
	static constexpr int image_vnd_fst[] = { 302,  };
	static constexpr int image_vnd_fujixerox_edmics_minus_mmr[] = { 562,  };
	static constexpr int image_vnd_fujixerox_edmics_minus_rlc[] = { 809,  };
	static constexpr int image_vnd_microsoft_icon[] = { 385,  };
	static constexpr int image_vnd_ms_minus_dds[] = { 183,  };
	static constexpr int image_vnd_ms_minus_modi[] = { 534,  };
	static constexpr int image_vnd_ms_minus_photo[] = { 1093,  };
	static constexpr int image_vnd_net_minus_fpx[] = { 637,  };
	static constexpr int image_vnd_pco_b16[] = { 64,  };
	static constexpr int image_vnd_tencent_tap[] = { 963,  };
	static constexpr int image_vnd_valve_source_texture[] = { 1075,  };
	static constexpr int image_vnd_wap_wbmp[] = { 1088,  };
	static constexpr int image_vnd_xiff[] = { 1162,  };
	static constexpr int image_vnd_zbrush_pcx[] = { 718,  };
	static constexpr int image_webp[] = { 1098,  };
	static constexpr int image_wmf[] = { 1106,  };
	static constexpr int image_x_minus_3ds[] = { 3,  };
	static constexpr int image_x_minus_cmu_minus_raster[] = { 797,  };
	static constexpr int image_x_minus_cmx[] = { 145,  };
	static constexpr int image_x_minus_freehand[] = { 281, 282, 283, 284, 285,  };
	static constexpr int image_x_minus_icon[] = { 385,  };
	static constexpr int image_x_minus_jng[] = { 426,  };
	static constexpr int image_x_minus_mrsid_minus_image[] = { 877,  };
	static constexpr int image_x_minus_ms_minus_bmp[] = { 78,  };
	static constexpr int image_x_minus_pcx[] = { 718,  };
	static constexpr int image_x_minus_pict[] = { 716, 734,  };
	static constexpr int image_x_minus_portable_minus_anymap[] = { 747,  };
	static constexpr int image_x_minus_portable_minus_bitmap[] = { 711,  };
	static constexpr int image_x_minus_portable_minus_graymap[] = { 730,  };
	static constexpr int image_x_minus_portable_minus_pixmap[] = { 754,  };
	static constexpr int image_x_minus_rgb[] = { 804,  };
	static constexpr int image_x_minus_tga[] = { 978,  };
	static constexpr int image_x_minus_xbitmap[] = { 1146,  };
	static constexpr int image_x_minus_xpixmap[] = { 1185,  };
	static constexpr int image_x_minus_xwindowdump[] = { 1199,  };
	static constexpr int message_disposition_minus_notification[] = { 194,  };
	static constexpr int message_global[] = { 1008,  };
	static constexpr int message_global_minus_delivery_minus_status[] = { 1005,  };
	static constexpr int message_global_minus_disposition_minus_notification[] = { 1007,  };
	static constexpr int message_global_minus_headers[] = { 1006,  };
	static constexpr int message_rfc822[] = { 243, 549,  };
	static constexpr int message_vnd_wfa_wsc[] = { 1124,  };
	static constexpr int model_3mf[] = { 8,  };
	static constexpr int model_gltf_plus_json[] = { 328,  };
	static constexpr int model_gltf_minus_binary[] = { 327,  };
	static constexpr int model_iges[] = { 391, 394,  };
	static constexpr int model_mesh[] = { 537, 602, 881,  };
	static constexpr int model_mtl[] = { 609,  };
	static constexpr int model_obj[] = { 651,  };
	static constexpr int model_step_plus_xml[] = { 931,  };
	static constexpr int model_step_plus_zip[] = { 933,  };
	static constexpr int model_step_minus_xml_plus_zip[] = { 932,  };
	static constexpr int model_stl[] = { 929,  };
	static constexpr int model_vnd_collada_plus_xml[] = { 171,  };
	static constexpr int model_vnd_dwf[] = { 226,  };
	static constexpr int model_vnd_gdl[] = { 316,  };
	static constexpr int model_vnd_gtw[] = { 346,  };
	static constexpr int model_vnd_mts[] = { 610,  };
	static constexpr int model_vnd_opengex[] = { 665,  };
	static constexpr int model_vnd_parasolid_transmit_binary[] = { 1138,  };
	static constexpr int model_vnd_parasolid_transmit_text[] = { 1139,  };
	static constexpr int model_vnd_sap_vds[] = { 1061,  };
	static constexpr int model_vnd_usdz_plus_zip[] = { 1020,  };
	static constexpr int model_vnd_valve_source_compiled_minus_map[] = { 84,  };
	static constexpr int model_vnd_vtu[] = { 1077,  };
	static constexpr int model_vrml[] = { 1069, 1123,  };
	static constexpr int model_x3d_plus_binary[] = { 1131, 1133,  };
	static constexpr int model_x3d_plus_fastinfoset[] = { 1131,  };
	static constexpr int model_x3d_plus_vrml[] = { 1134, 1136,  };
	static constexpr int model_x3d_plus_xml[] = { 1130, 1137,  };
	static constexpr int model_x3d_minus_vrml[] = { 1134,  };
	static constexpr int text_cache_minus_manifest[] = { 37, 521,  };
	static constexpr int text_calendar[] = { 387, 389,  };
	static constexpr int text_coffeescript[] = { 147, 488,  };
	static constexpr int text_css[] = { 163,  };
	static constexpr int text_csv[] = { 165,  };
	static constexpr int text_html[] = { 376, 377, 876,  };
	static constexpr int text_jade[] = { 417,  };
	static constexpr int text_jsx[] = { 446,  };
	static constexpr int text_less[] = { 481,  };
	static constexpr int text_markdown[] = { 524, 532,  };
	static constexpr int text_mathml[] = { 561,  };
	static constexpr int text_mdx[] = { 535,  };
	static constexpr int text_n3[] = { 624,  };
	static constexpr int text_plain[] = { 149, 186, 400, 401, 485, 490, 974, 1003,  };
	static constexpr int text_prs_lines_tag[] = { 216,  };
	static constexpr int text_richtext[] = { 832,  };
	static constexpr int text_rtf[] = { 830,  };
	static constexpr int text_sgml[] = { 870, 871,  };
	static constexpr int text_shex[] = { 874,  };
	static constexpr int text_slim[] = { 893, 894,  };
	static constexpr int text_spdx[] = { 907,  };
	static constexpr int text_stylus[] = { 936, 937,  };
	static constexpr int text_tab_minus_separated_minus_values[] = { 994,  };
	static constexpr int text_troff[] = { 520, 536, 596, 819, 958, 988,  };
	static constexpr int text_turtle[] = { 997,  };
	static constexpr int text_uri_minus_list[] = { 1017, 1018, 1019,  };
	static constexpr int text_vcard[] = { 1054,  };
	static constexpr int text_vnd_curl[] = { 167,  };
	static constexpr int text_vnd_curl_dcurl[] = { 179,  };
	static constexpr int text_vnd_curl_mcurl[] = { 531,  };
	static constexpr int text_vnd_curl_scurl[] = { 846,  };
	static constexpr int text_vnd_dvb_subtitle[] = { 938,  };
	static constexpr int text_vnd_familysearch_gedcom[] = { 318,  };
	static constexpr int text_vnd_fly[] = { 294,  };
	static constexpr int text_vnd_fmi_flexstor[] = { 293,  };
	static constexpr int text_vnd_graphviz[] = { 347,  };
	static constexpr int text_vnd_in3d_3dml[] = { 2,  };
	static constexpr int text_vnd_in3d_spot[] = { 910,  };
	static constexpr int text_vnd_sun_j2me_app_minus_descriptor[] = { 416,  };
	static constexpr int text_vnd_wap_wml[] = { 1108,  };
	static constexpr int text_vnd_wap_wmlscript[] = { 1110,  };
	static constexpr int text_vtt[] = { 1076,  };
	static constexpr int text_x_minus_asm[] = { 45, 835,  };
	static constexpr int text_x_minus_c[] = { 89, 107, 152, 170, 191, 351, 366,  };
	static constexpr int text_x_minus_component[] = { 374,  };
	static constexpr int text_x_minus_fortran[] = { 269, 271, 272, 298,  };
	static constexpr int text_x_minus_handlebars_minus_template[] = { 357,  };
	static constexpr int text_x_minus_java_minus_source[] = { 421,  };
	static constexpr int text_x_minus_lua[] = { 495,  };
	static constexpr int text_x_minus_markdown[] = { 555,  };
	static constexpr int text_x_minus_nfo[] = { 629,  };
	static constexpr int text_x_minus_opml[] = { 675,  };
	static constexpr int text_x_minus_org[] = { 678,  };
	static constexpr int text_x_minus_pascal[] = { 696, 708,  };
	static constexpr int text_x_minus_processing[] = { 722,  };
	static constexpr int text_x_minus_sass[] = { 838,  };
	static constexpr int text_x_minus_scss[] = { 845,  };
	static constexpr int text_x_minus_setext[] = { 256,  };
	static constexpr int text_x_minus_sfv[] = { 867,  };
	static constexpr int text_x_minus_suse_minus_ymp[] = { 1206,  };
	static constexpr int text_x_minus_uuencode[] = { 1023,  };
	static constexpr int text_x_minus_vcalendar[] = { 1058,  };
	static constexpr int text_x_minus_vcard[] = { 1056,  };
	static constexpr int text_xml[] = { 1178,  };
	static constexpr int text_yaml[] = { 1202, 1205,  };
	static constexpr int video_3gpp[] = { 5, 6,  };
	static constexpr int video_3gpp2[] = { 4,  };
	static constexpr int video_h261[] = { 352,  };
	static constexpr int video_h263[] = { 353,  };
	static constexpr int video_h264[] = { 354,  };
	static constexpr int video_iso_segment[] = { 512,  };
	static constexpr int video_jpeg[] = { 436,  };
	static constexpr int video_jpm[] = { 435, 438,  };
	static constexpr int video_mj2[] = { 550, 551,  };
	static constexpr int video_mp2t[] = { 992,  };
	static constexpr int video_mp4[] = { 574, 577, 584,  };
	static constexpr int video_mpeg[] = { 502, 505, 580, 581, 583,  };
	static constexpr int video_ogg[] = { 667,  };
	static constexpr int video_quicktime[] = { 567, 783,  };
	static constexpr int video_vnd_dece_hd[] = { 1028, 1040,  };
	static constexpr int video_vnd_dece_mobile[] = { 1030, 1042,  };
	static constexpr int video_vnd_dece_pd[] = { 1031, 1043,  };
	static constexpr int video_vnd_dece_sd[] = { 1032, 1044,  };
	static constexpr int video_vnd_dece_video[] = { 1035, 1047,  };
	static constexpr int video_vnd_dvb_file[] = { 223,  };
	static constexpr int video_vnd_fvt[] = { 305,  };
	static constexpr int video_vnd_mpegurl[] = { 513, 622,  };
	static constexpr int video_vnd_ms_minus_playready_media_pyv[] = { 778,  };
	static constexpr int video_vnd_uvvu_mp4[] = { 1034, 1046,  };
	static constexpr int video_vnd_vivo[] = { 1064,  };
	static constexpr int video_webm[] = { 1096,  };
	static constexpr int video_x_minus_f4v[] = { 270,  };
	static constexpr int video_x_minus_fli[] = { 289,  };
	static constexpr int video_x_minus_flv[] = { 291,  };
	static constexpr int video_x_minus_m4v[] = { 514,  };
	static constexpr int video_x_minus_matroska[] = { 553, 556, 557,  };
	static constexpr int video_x_minus_mng[] = { 563,  };
	static constexpr int video_x_minus_ms_minus_asf[] = { 44, 47,  };
	static constexpr int video_x_minus_ms_minus_vob[] = { 1066,  };
	static constexpr int video_x_minus_ms_minus_wm[] = { 1103,  };
	static constexpr int video_x_minus_ms_minus_wmv[] = { 1112,  };
	static constexpr int video_x_minus_ms_minus_wmx[] = { 1113,  };
	static constexpr int video_x_minus_ms_minus_wvx[] = { 1128,  };
	static constexpr int video_x_minus_msvideo[] = { 57,  };
	static constexpr int video_x_minus_sgi_minus_movie[] = { 568,  };
	static constexpr int video_x_minus_smv[] = { 901,  };
	static constexpr int x_minus_conference_x_minus_cooltalk[] = { 383,  };
	
}    // namespace

namespace mime {
	namespace details {
		const int32 types_to_ext_size{ 965 };
		const mime_ext types_to_ext[] = {
		{ ::application_andrew_minus_inset, ::length_of(::application_andrew_minus_inset) },
		{ ::application_applixware, ::length_of(::application_applixware) },
		{ ::application_atom_plus_xml, ::length_of(::application_atom_plus_xml) },
		{ ::application_atomcat_plus_xml, ::length_of(::application_atomcat_plus_xml) },
		{ ::application_atomdeleted_plus_xml, ::length_of(::application_atomdeleted_plus_xml) },
		{ ::application_atomsvc_plus_xml, ::length_of(::application_atomsvc_plus_xml) },
		{ ::application_atsc_minus_dwd_plus_xml, ::length_of(::application_atsc_minus_dwd_plus_xml) },
		{ ::application_atsc_minus_held_plus_xml, ::length_of(::application_atsc_minus_held_plus_xml) },
		{ ::application_atsc_minus_rsat_plus_xml, ::length_of(::application_atsc_minus_rsat_plus_xml) },
		{ ::application_bdoc, ::length_of(::application_bdoc) },
		{ ::application_calendar_plus_xml, ::length_of(::application_calendar_plus_xml) },
		{ ::application_ccxml_plus_xml, ::length_of(::application_ccxml_plus_xml) },
		{ ::application_cdfx_plus_xml, ::length_of(::application_cdfx_plus_xml) },
		{ ::application_cdmi_minus_capability, ::length_of(::application_cdmi_minus_capability) },
		{ ::application_cdmi_minus_container, ::length_of(::application_cdmi_minus_container) },
		{ ::application_cdmi_minus_domain, ::length_of(::application_cdmi_minus_domain) },
		{ ::application_cdmi_minus_object, ::length_of(::application_cdmi_minus_object) },
		{ ::application_cdmi_minus_queue, ::length_of(::application_cdmi_minus_queue) },
		{ ::application_cpl_plus_xml, ::length_of(::application_cpl_plus_xml) },
		{ ::application_cu_minus_seeme, ::length_of(::application_cu_minus_seeme) },
		{ ::application_dash_plus_xml, ::length_of(::application_dash_plus_xml) },
		{ ::application_dash_minus_patch_plus_xml, ::length_of(::application_dash_minus_patch_plus_xml) },
		{ ::application_davmount_plus_xml, ::length_of(::application_davmount_plus_xml) },
		{ ::application_docbook_plus_xml, ::length_of(::application_docbook_plus_xml) },
		{ ::application_dssc_plus_der, ::length_of(::application_dssc_plus_der) },
		{ ::application_dssc_plus_xml, ::length_of(::application_dssc_plus_xml) },
		{ ::application_ecmascript, ::length_of(::application_ecmascript) },
		{ ::application_emma_plus_xml, ::length_of(::application_emma_plus_xml) },
		{ ::application_emotionml_plus_xml, ::length_of(::application_emotionml_plus_xml) },
		{ ::application_epub_plus_zip, ::length_of(::application_epub_plus_zip) },
		{ ::application_exi, ::length_of(::application_exi) },
		{ ::application_express, ::length_of(::application_express) },
		{ ::application_fdt_plus_xml, ::length_of(::application_fdt_plus_xml) },
		{ ::application_font_minus_tdpfr, ::length_of(::application_font_minus_tdpfr) },
		{ ::application_geo_plus_json, ::length_of(::application_geo_plus_json) },
		{ ::application_gml_plus_xml, ::length_of(::application_gml_plus_xml) },
		{ ::application_gpx_plus_xml, ::length_of(::application_gpx_plus_xml) },
		{ ::application_gxf, ::length_of(::application_gxf) },
		{ ::application_gzip, ::length_of(::application_gzip) },
		{ ::application_hjson, ::length_of(::application_hjson) },
		{ ::application_hyperstudio, ::length_of(::application_hyperstudio) },
		{ ::application_inkml_plus_xml, ::length_of(::application_inkml_plus_xml) },
		{ ::application_ipfix, ::length_of(::application_ipfix) },
		{ ::application_its_plus_xml, ::length_of(::application_its_plus_xml) },
		{ ::application_java_minus_archive, ::length_of(::application_java_minus_archive) },
		{ ::application_java_minus_serialized_minus_object, ::length_of(::application_java_minus_serialized_minus_object) },
		{ ::application_java_minus_vm, ::length_of(::application_java_minus_vm) },
		{ ::application_javascript, ::length_of(::application_javascript) },
		{ ::application_json, ::length_of(::application_json) },
		{ ::application_json5, ::length_of(::application_json5) },
		{ ::application_jsonml_plus_json, ::length_of(::application_jsonml_plus_json) },
		{ ::application_ld_plus_json, ::length_of(::application_ld_plus_json) },
		{ ::application_lgr_plus_xml, ::length_of(::application_lgr_plus_xml) },
		{ ::application_lost_plus_xml, ::length_of(::application_lost_plus_xml) },
		{ ::application_mac_minus_binhex40, ::length_of(::application_mac_minus_binhex40) },
		{ ::application_mac_minus_compactpro, ::length_of(::application_mac_minus_compactpro) },
		{ ::application_mads_plus_xml, ::length_of(::application_mads_plus_xml) },
		{ ::application_manifest_plus_json, ::length_of(::application_manifest_plus_json) },
		{ ::application_marc, ::length_of(::application_marc) },
		{ ::application_marcxml_plus_xml, ::length_of(::application_marcxml_plus_xml) },
		{ ::application_mathematica, ::length_of(::application_mathematica) },
		{ ::application_mathml_plus_xml, ::length_of(::application_mathml_plus_xml) },
		{ ::application_mbox, ::length_of(::application_mbox) },
		{ ::application_media_minus_policy_minus_dataset_plus_xml, ::length_of(::application_media_minus_policy_minus_dataset_plus_xml) },
		{ ::application_mediaservercontrol_plus_xml, ::length_of(::application_mediaservercontrol_plus_xml) },
		{ ::application_metalink_plus_xml, ::length_of(::application_metalink_plus_xml) },
		{ ::application_metalink4_plus_xml, ::length_of(::application_metalink4_plus_xml) },
		{ ::application_mets_plus_xml, ::length_of(::application_mets_plus_xml) },
		{ ::application_mmt_minus_aei_plus_xml, ::length_of(::application_mmt_minus_aei_plus_xml) },
		{ ::application_mmt_minus_usd_plus_xml, ::length_of(::application_mmt_minus_usd_plus_xml) },
		{ ::application_mods_plus_xml, ::length_of(::application_mods_plus_xml) },
		{ ::application_mp21, ::length_of(::application_mp21) },
		{ ::application_mp4, ::length_of(::application_mp4) },
		{ ::application_msword, ::length_of(::application_msword) },
		{ ::application_mxf, ::length_of(::application_mxf) },
		{ ::application_n_minus_quads, ::length_of(::application_n_minus_quads) },
		{ ::application_n_minus_triples, ::length_of(::application_n_minus_triples) },
		{ ::application_node, ::length_of(::application_node) },
		{ ::application_octet_minus_stream, ::length_of(::application_octet_minus_stream) },
		{ ::application_oda, ::length_of(::application_oda) },
		{ ::application_oebps_minus_package_plus_xml, ::length_of(::application_oebps_minus_package_plus_xml) },
		{ ::application_ogg, ::length_of(::application_ogg) },
		{ ::application_omdoc_plus_xml, ::length_of(::application_omdoc_plus_xml) },
		{ ::application_onenote, ::length_of(::application_onenote) },
		{ ::application_oxps, ::length_of(::application_oxps) },
		{ ::application_p2p_minus_overlay_plus_xml, ::length_of(::application_p2p_minus_overlay_plus_xml) },
		{ ::application_patch_minus_ops_minus_error_plus_xml, ::length_of(::application_patch_minus_ops_minus_error_plus_xml) },
		{ ::application_pdf, ::length_of(::application_pdf) },
		{ ::application_pgp_minus_encrypted, ::length_of(::application_pgp_minus_encrypted) },
		{ ::application_pgp_minus_keys, ::length_of(::application_pgp_minus_keys) },
		{ ::application_pgp_minus_signature, ::length_of(::application_pgp_minus_signature) },
		{ ::application_pics_minus_rules, ::length_of(::application_pics_minus_rules) },
		{ ::application_pkcs10, ::length_of(::application_pkcs10) },
		{ ::application_pkcs7_minus_mime, ::length_of(::application_pkcs7_minus_mime) },
		{ ::application_pkcs7_minus_signature, ::length_of(::application_pkcs7_minus_signature) },
		{ ::application_pkcs8, ::length_of(::application_pkcs8) },
		{ ::application_pkix_minus_attr_minus_cert, ::length_of(::application_pkix_minus_attr_minus_cert) },
		{ ::application_pkix_minus_cert, ::length_of(::application_pkix_minus_cert) },
		{ ::application_pkix_minus_crl, ::length_of(::application_pkix_minus_crl) },
		{ ::application_pkix_minus_pkipath, ::length_of(::application_pkix_minus_pkipath) },
		{ ::application_pkixcmp, ::length_of(::application_pkixcmp) },
		{ ::application_pls_plus_xml, ::length_of(::application_pls_plus_xml) },
		{ ::application_postscript, ::length_of(::application_postscript) },
		{ ::application_provenance_plus_xml, ::length_of(::application_provenance_plus_xml) },
		{ ::application_prs_cww, ::length_of(::application_prs_cww) },
		{ ::application_pskc_plus_xml, ::length_of(::application_pskc_plus_xml) },
		{ ::application_raml_plus_yaml, ::length_of(::application_raml_plus_yaml) },
		{ ::application_rdf_plus_xml, ::length_of(::application_rdf_plus_xml) },
		{ ::application_reginfo_plus_xml, ::length_of(::application_reginfo_plus_xml) },
		{ ::application_relax_minus_ng_minus_compact_minus_syntax, ::length_of(::application_relax_minus_ng_minus_compact_minus_syntax) },
		{ ::application_resource_minus_lists_plus_xml, ::length_of(::application_resource_minus_lists_plus_xml) },
		{ ::application_resource_minus_lists_minus_diff_plus_xml, ::length_of(::application_resource_minus_lists_minus_diff_plus_xml) },
		{ ::application_rls_minus_services_plus_xml, ::length_of(::application_rls_minus_services_plus_xml) },
		{ ::application_route_minus_apd_plus_xml, ::length_of(::application_route_minus_apd_plus_xml) },
		{ ::application_route_minus_s_minus_tsid_plus_xml, ::length_of(::application_route_minus_s_minus_tsid_plus_xml) },
		{ ::application_route_minus_usd_plus_xml, ::length_of(::application_route_minus_usd_plus_xml) },
		{ ::application_rpki_minus_ghostbusters, ::length_of(::application_rpki_minus_ghostbusters) },
		{ ::application_rpki_minus_manifest, ::length_of(::application_rpki_minus_manifest) },
		{ ::application_rpki_minus_roa, ::length_of(::application_rpki_minus_roa) },
		{ ::application_rsd_plus_xml, ::length_of(::application_rsd_plus_xml) },
		{ ::application_rss_plus_xml, ::length_of(::application_rss_plus_xml) },
		{ ::application_rtf, ::length_of(::application_rtf) },
		{ ::application_sbml_plus_xml, ::length_of(::application_sbml_plus_xml) },
		{ ::application_scvp_minus_cv_minus_request, ::length_of(::application_scvp_minus_cv_minus_request) },
		{ ::application_scvp_minus_cv_minus_response, ::length_of(::application_scvp_minus_cv_minus_response) },
		{ ::application_scvp_minus_vp_minus_request, ::length_of(::application_scvp_minus_vp_minus_request) },
		{ ::application_scvp_minus_vp_minus_response, ::length_of(::application_scvp_minus_vp_minus_response) },
		{ ::application_sdp, ::length_of(::application_sdp) },
		{ ::application_senml_plus_xml, ::length_of(::application_senml_plus_xml) },
		{ ::application_sensml_plus_xml, ::length_of(::application_sensml_plus_xml) },
		{ ::application_set_minus_payment_minus_initiation, ::length_of(::application_set_minus_payment_minus_initiation) },
		{ ::application_set_minus_registration_minus_initiation, ::length_of(::application_set_minus_registration_minus_initiation) },
		{ ::application_shf_plus_xml, ::length_of(::application_shf_plus_xml) },
		{ ::application_sieve, ::length_of(::application_sieve) },
		{ ::application_smil_plus_xml, ::length_of(::application_smil_plus_xml) },
		{ ::application_sparql_minus_query, ::length_of(::application_sparql_minus_query) },
		{ ::application_sparql_minus_results_plus_xml, ::length_of(::application_sparql_minus_results_plus_xml) },
		{ ::application_srgs, ::length_of(::application_srgs) },
		{ ::application_srgs_plus_xml, ::length_of(::application_srgs_plus_xml) },
		{ ::application_sru_plus_xml, ::length_of(::application_sru_plus_xml) },
		{ ::application_ssdl_plus_xml, ::length_of(::application_ssdl_plus_xml) },
		{ ::application_ssml_plus_xml, ::length_of(::application_ssml_plus_xml) },
		{ ::application_swid_plus_xml, ::length_of(::application_swid_plus_xml) },
		{ ::application_tei_plus_xml, ::length_of(::application_tei_plus_xml) },
		{ ::application_thraud_plus_xml, ::length_of(::application_thraud_plus_xml) },
		{ ::application_timestamped_minus_data, ::length_of(::application_timestamped_minus_data) },
		{ ::application_toml, ::length_of(::application_toml) },
		{ ::application_trig, ::length_of(::application_trig) },
		{ ::application_ttml_plus_xml, ::length_of(::application_ttml_plus_xml) },
		{ ::application_ubjson, ::length_of(::application_ubjson) },
		{ ::application_urc_minus_ressheet_plus_xml, ::length_of(::application_urc_minus_ressheet_plus_xml) },
		{ ::application_urc_minus_targetdesc_plus_xml, ::length_of(::application_urc_minus_targetdesc_plus_xml) },
		{ ::application_vnd_1000minds_decision_minus_model_plus_xml, ::length_of(::application_vnd_1000minds_decision_minus_model_plus_xml) },
		{ ::application_vnd_3gpp_pic_minus_bw_minus_large, ::length_of(::application_vnd_3gpp_pic_minus_bw_minus_large) },
		{ ::application_vnd_3gpp_pic_minus_bw_minus_small, ::length_of(::application_vnd_3gpp_pic_minus_bw_minus_small) },
		{ ::application_vnd_3gpp_pic_minus_bw_minus_var, ::length_of(::application_vnd_3gpp_pic_minus_bw_minus_var) },
		{ ::application_vnd_3gpp2_tcap, ::length_of(::application_vnd_3gpp2_tcap) },
		{ ::application_vnd_3m_post_minus_it_minus_notes, ::length_of(::application_vnd_3m_post_minus_it_minus_notes) },
		{ ::application_vnd_accpac_simply_aso, ::length_of(::application_vnd_accpac_simply_aso) },
		{ ::application_vnd_accpac_simply_imp, ::length_of(::application_vnd_accpac_simply_imp) },
		{ ::application_vnd_acucobol, ::length_of(::application_vnd_acucobol) },
		{ ::application_vnd_acucorp, ::length_of(::application_vnd_acucorp) },
		{ ::application_vnd_adobe_air_minus_application_minus_installer_minus_package_plus_zip, ::length_of(::application_vnd_adobe_air_minus_application_minus_installer_minus_package_plus_zip) },
		{ ::application_vnd_adobe_formscentral_fcdt, ::length_of(::application_vnd_adobe_formscentral_fcdt) },
		{ ::application_vnd_adobe_fxp, ::length_of(::application_vnd_adobe_fxp) },
		{ ::application_vnd_adobe_xdp_plus_xml, ::length_of(::application_vnd_adobe_xdp_plus_xml) },
		{ ::application_vnd_adobe_xfdf, ::length_of(::application_vnd_adobe_xfdf) },
		{ ::application_vnd_age, ::length_of(::application_vnd_age) },
		{ ::application_vnd_ahead_space, ::length_of(::application_vnd_ahead_space) },
		{ ::application_vnd_airzip_filesecure_azf, ::length_of(::application_vnd_airzip_filesecure_azf) },
		{ ::application_vnd_airzip_filesecure_azs, ::length_of(::application_vnd_airzip_filesecure_azs) },
		{ ::application_vnd_amazon_ebook, ::length_of(::application_vnd_amazon_ebook) },
		{ ::application_vnd_americandynamics_acc, ::length_of(::application_vnd_americandynamics_acc) },
		{ ::application_vnd_amiga_ami, ::length_of(::application_vnd_amiga_ami) },
		{ ::application_vnd_android_package_minus_archive, ::length_of(::application_vnd_android_package_minus_archive) },
		{ ::application_vnd_anser_minus_web_minus_certificate_minus_issue_minus_initiation, ::length_of(::application_vnd_anser_minus_web_minus_certificate_minus_issue_minus_initiation) },
		{ ::application_vnd_anser_minus_web_minus_funds_minus_transfer_minus_initiation, ::length_of(::application_vnd_anser_minus_web_minus_funds_minus_transfer_minus_initiation) },
		{ ::application_vnd_antix_game_minus_component, ::length_of(::application_vnd_antix_game_minus_component) },
		{ ::application_vnd_apple_installer_plus_xml, ::length_of(::application_vnd_apple_installer_plus_xml) },
		{ ::application_vnd_apple_keynote, ::length_of(::application_vnd_apple_keynote) },
		{ ::application_vnd_apple_mpegurl, ::length_of(::application_vnd_apple_mpegurl) },
		{ ::application_vnd_apple_numbers, ::length_of(::application_vnd_apple_numbers) },
		{ ::application_vnd_apple_pages, ::length_of(::application_vnd_apple_pages) },
		{ ::application_vnd_apple_pkpass, ::length_of(::application_vnd_apple_pkpass) },
		{ ::application_vnd_aristanetworks_swi, ::length_of(::application_vnd_aristanetworks_swi) },
		{ ::application_vnd_astraea_minus_software_iota, ::length_of(::application_vnd_astraea_minus_software_iota) },
		{ ::application_vnd_audiograph, ::length_of(::application_vnd_audiograph) },
		{ ::application_vnd_balsamiq_bmml_plus_xml, ::length_of(::application_vnd_balsamiq_bmml_plus_xml) },
		{ ::application_vnd_blueice_multipass, ::length_of(::application_vnd_blueice_multipass) },
		{ ::application_vnd_bmi, ::length_of(::application_vnd_bmi) },
		{ ::application_vnd_businessobjects, ::length_of(::application_vnd_businessobjects) },
		{ ::application_vnd_chemdraw_plus_xml, ::length_of(::application_vnd_chemdraw_plus_xml) },
		{ ::application_vnd_chipnuts_karaoke_minus_mmd, ::length_of(::application_vnd_chipnuts_karaoke_minus_mmd) },
		{ ::application_vnd_cinderella, ::length_of(::application_vnd_cinderella) },
		{ ::application_vnd_citationstyles_style_plus_xml, ::length_of(::application_vnd_citationstyles_style_plus_xml) },
		{ ::application_vnd_claymore, ::length_of(::application_vnd_claymore) },
		{ ::application_vnd_cloanto_rp9, ::length_of(::application_vnd_cloanto_rp9) },
		{ ::application_vnd_clonk_c4group, ::length_of(::application_vnd_clonk_c4group) },
		{ ::application_vnd_cluetrust_cartomobile_minus_config, ::length_of(::application_vnd_cluetrust_cartomobile_minus_config) },
		{ ::application_vnd_cluetrust_cartomobile_minus_config_minus_pkg, ::length_of(::application_vnd_cluetrust_cartomobile_minus_config_minus_pkg) },
		{ ::application_vnd_commonspace, ::length_of(::application_vnd_commonspace) },
		{ ::application_vnd_contact_cmsg, ::length_of(::application_vnd_contact_cmsg) },
		{ ::application_vnd_cosmocaller, ::length_of(::application_vnd_cosmocaller) },
		{ ::application_vnd_crick_clicker, ::length_of(::application_vnd_crick_clicker) },
		{ ::application_vnd_crick_clicker_keyboard, ::length_of(::application_vnd_crick_clicker_keyboard) },
		{ ::application_vnd_crick_clicker_palette, ::length_of(::application_vnd_crick_clicker_palette) },
		{ ::application_vnd_crick_clicker_template, ::length_of(::application_vnd_crick_clicker_template) },
		{ ::application_vnd_crick_clicker_wordbank, ::length_of(::application_vnd_crick_clicker_wordbank) },
		{ ::application_vnd_criticaltools_wbs_plus_xml, ::length_of(::application_vnd_criticaltools_wbs_plus_xml) },
		{ ::application_vnd_ctc_minus_posml, ::length_of(::application_vnd_ctc_minus_posml) },
		{ ::application_vnd_cups_minus_ppd, ::length_of(::application_vnd_cups_minus_ppd) },
		{ ::application_vnd_curl_car, ::length_of(::application_vnd_curl_car) },
		{ ::application_vnd_curl_pcurl, ::length_of(::application_vnd_curl_pcurl) },
		{ ::application_vnd_dart, ::length_of(::application_vnd_dart) },
		{ ::application_vnd_data_minus_vision_rdz, ::length_of(::application_vnd_data_minus_vision_rdz) },
		{ ::application_vnd_dbf, ::length_of(::application_vnd_dbf) },
		{ ::application_vnd_dece_data, ::length_of(::application_vnd_dece_data) },
		{ ::application_vnd_dece_ttml_plus_xml, ::length_of(::application_vnd_dece_ttml_plus_xml) },
		{ ::application_vnd_dece_unspecified, ::length_of(::application_vnd_dece_unspecified) },
		{ ::application_vnd_dece_zip, ::length_of(::application_vnd_dece_zip) },
		{ ::application_vnd_denovo_fcselayout_minus_link, ::length_of(::application_vnd_denovo_fcselayout_minus_link) },
		{ ::application_vnd_dna, ::length_of(::application_vnd_dna) },
		{ ::application_vnd_dolby_mlp, ::length_of(::application_vnd_dolby_mlp) },
		{ ::application_vnd_dpgraph, ::length_of(::application_vnd_dpgraph) },
		{ ::application_vnd_dreamfactory, ::length_of(::application_vnd_dreamfactory) },
		{ ::application_vnd_ds_minus_keypoint, ::length_of(::application_vnd_ds_minus_keypoint) },
		{ ::application_vnd_dvb_ait, ::length_of(::application_vnd_dvb_ait) },
		{ ::application_vnd_dvb_service, ::length_of(::application_vnd_dvb_service) },
		{ ::application_vnd_dynageo, ::length_of(::application_vnd_dynageo) },
		{ ::application_vnd_ecowin_chart, ::length_of(::application_vnd_ecowin_chart) },
		{ ::application_vnd_enliven, ::length_of(::application_vnd_enliven) },
		{ ::application_vnd_epson_esf, ::length_of(::application_vnd_epson_esf) },
		{ ::application_vnd_epson_msf, ::length_of(::application_vnd_epson_msf) },
		{ ::application_vnd_epson_quickanime, ::length_of(::application_vnd_epson_quickanime) },
		{ ::application_vnd_epson_salt, ::length_of(::application_vnd_epson_salt) },
		{ ::application_vnd_epson_ssf, ::length_of(::application_vnd_epson_ssf) },
		{ ::application_vnd_eszigno3_plus_xml, ::length_of(::application_vnd_eszigno3_plus_xml) },
		{ ::application_vnd_ezpix_minus_album, ::length_of(::application_vnd_ezpix_minus_album) },
		{ ::application_vnd_ezpix_minus_package, ::length_of(::application_vnd_ezpix_minus_package) },
		{ ::application_vnd_fdf, ::length_of(::application_vnd_fdf) },
		{ ::application_vnd_fdsn_mseed, ::length_of(::application_vnd_fdsn_mseed) },
		{ ::application_vnd_fdsn_seed, ::length_of(::application_vnd_fdsn_seed) },
		{ ::application_vnd_flographit, ::length_of(::application_vnd_flographit) },
		{ ::application_vnd_fluxtime_clip, ::length_of(::application_vnd_fluxtime_clip) },
		{ ::application_vnd_framemaker, ::length_of(::application_vnd_framemaker) },
		{ ::application_vnd_frogans_fnc, ::length_of(::application_vnd_frogans_fnc) },
		{ ::application_vnd_frogans_ltf, ::length_of(::application_vnd_frogans_ltf) },
		{ ::application_vnd_fsc_weblaunch, ::length_of(::application_vnd_fsc_weblaunch) },
		{ ::application_vnd_fujitsu_oasys, ::length_of(::application_vnd_fujitsu_oasys) },
		{ ::application_vnd_fujitsu_oasys2, ::length_of(::application_vnd_fujitsu_oasys2) },
		{ ::application_vnd_fujitsu_oasys3, ::length_of(::application_vnd_fujitsu_oasys3) },
		{ ::application_vnd_fujitsu_oasysgp, ::length_of(::application_vnd_fujitsu_oasysgp) },
		{ ::application_vnd_fujitsu_oasysprs, ::length_of(::application_vnd_fujitsu_oasysprs) },
		{ ::application_vnd_fujixerox_ddd, ::length_of(::application_vnd_fujixerox_ddd) },
		{ ::application_vnd_fujixerox_docuworks, ::length_of(::application_vnd_fujixerox_docuworks) },
		{ ::application_vnd_fujixerox_docuworks_binder, ::length_of(::application_vnd_fujixerox_docuworks_binder) },
		{ ::application_vnd_fuzzysheet, ::length_of(::application_vnd_fuzzysheet) },
		{ ::application_vnd_genomatix_tuxedo, ::length_of(::application_vnd_genomatix_tuxedo) },
		{ ::application_vnd_geogebra_file, ::length_of(::application_vnd_geogebra_file) },
		{ ::application_vnd_geogebra_tool, ::length_of(::application_vnd_geogebra_tool) },
		{ ::application_vnd_geometry_minus_explorer, ::length_of(::application_vnd_geometry_minus_explorer) },
		{ ::application_vnd_geonext, ::length_of(::application_vnd_geonext) },
		{ ::application_vnd_geoplan, ::length_of(::application_vnd_geoplan) },
		{ ::application_vnd_geospace, ::length_of(::application_vnd_geospace) },
		{ ::application_vnd_gmx, ::length_of(::application_vnd_gmx) },
		{ ::application_vnd_google_minus_apps_document, ::length_of(::application_vnd_google_minus_apps_document) },
		{ ::application_vnd_google_minus_apps_presentation, ::length_of(::application_vnd_google_minus_apps_presentation) },
		{ ::application_vnd_google_minus_apps_spreadsheet, ::length_of(::application_vnd_google_minus_apps_spreadsheet) },
		{ ::application_vnd_google_minus_earth_kml_plus_xml, ::length_of(::application_vnd_google_minus_earth_kml_plus_xml) },
		{ ::application_vnd_google_minus_earth_kmz, ::length_of(::application_vnd_google_minus_earth_kmz) },
		{ ::application_vnd_grafeq, ::length_of(::application_vnd_grafeq) },
		{ ::application_vnd_groove_minus_account, ::length_of(::application_vnd_groove_minus_account) },
		{ ::application_vnd_groove_minus_help, ::length_of(::application_vnd_groove_minus_help) },
		{ ::application_vnd_groove_minus_identity_minus_message, ::length_of(::application_vnd_groove_minus_identity_minus_message) },
		{ ::application_vnd_groove_minus_injector, ::length_of(::application_vnd_groove_minus_injector) },
		{ ::application_vnd_groove_minus_tool_minus_message, ::length_of(::application_vnd_groove_minus_tool_minus_message) },
		{ ::application_vnd_groove_minus_tool_minus_template, ::length_of(::application_vnd_groove_minus_tool_minus_template) },
		{ ::application_vnd_groove_minus_vcard, ::length_of(::application_vnd_groove_minus_vcard) },
		{ ::application_vnd_hal_plus_xml, ::length_of(::application_vnd_hal_plus_xml) },
		{ ::application_vnd_handheld_minus_entertainment_plus_xml, ::length_of(::application_vnd_handheld_minus_entertainment_plus_xml) },
		{ ::application_vnd_hbci, ::length_of(::application_vnd_hbci) },
		{ ::application_vnd_hhe_lesson_minus_player, ::length_of(::application_vnd_hhe_lesson_minus_player) },
		{ ::application_vnd_hp_minus_hpgl, ::length_of(::application_vnd_hp_minus_hpgl) },
		{ ::application_vnd_hp_minus_hpid, ::length_of(::application_vnd_hp_minus_hpid) },
		{ ::application_vnd_hp_minus_hps, ::length_of(::application_vnd_hp_minus_hps) },
		{ ::application_vnd_hp_minus_jlyt, ::length_of(::application_vnd_hp_minus_jlyt) },
		{ ::application_vnd_hp_minus_pcl, ::length_of(::application_vnd_hp_minus_pcl) },
		{ ::application_vnd_hp_minus_pclxl, ::length_of(::application_vnd_hp_minus_pclxl) },
		{ ::application_vnd_hydrostatix_sof_minus_data, ::length_of(::application_vnd_hydrostatix_sof_minus_data) },
		{ ::application_vnd_ibm_minipay, ::length_of(::application_vnd_ibm_minipay) },
		{ ::application_vnd_ibm_modcap, ::length_of(::application_vnd_ibm_modcap) },
		{ ::application_vnd_ibm_rights_minus_management, ::length_of(::application_vnd_ibm_rights_minus_management) },
		{ ::application_vnd_ibm_secure_minus_container, ::length_of(::application_vnd_ibm_secure_minus_container) },
		{ ::application_vnd_iccprofile, ::length_of(::application_vnd_iccprofile) },
		{ ::application_vnd_igloader, ::length_of(::application_vnd_igloader) },
		{ ::application_vnd_immervision_minus_ivp, ::length_of(::application_vnd_immervision_minus_ivp) },
		{ ::application_vnd_immervision_minus_ivu, ::length_of(::application_vnd_immervision_minus_ivu) },
		{ ::application_vnd_insors_igm, ::length_of(::application_vnd_insors_igm) },
		{ ::application_vnd_intercon_formnet, ::length_of(::application_vnd_intercon_formnet) },
		{ ::application_vnd_intergeo, ::length_of(::application_vnd_intergeo) },
		{ ::application_vnd_intu_qbo, ::length_of(::application_vnd_intu_qbo) },
		{ ::application_vnd_intu_qfx, ::length_of(::application_vnd_intu_qfx) },
		{ ::application_vnd_ipunplugged_rcprofile, ::length_of(::application_vnd_ipunplugged_rcprofile) },
		{ ::application_vnd_irepository_package_plus_xml, ::length_of(::application_vnd_irepository_package_plus_xml) },
		{ ::application_vnd_is_minus_xpr, ::length_of(::application_vnd_is_minus_xpr) },
		{ ::application_vnd_isac_fcs, ::length_of(::application_vnd_isac_fcs) },
		{ ::application_vnd_jam, ::length_of(::application_vnd_jam) },
		{ ::application_vnd_jcp_javame_midlet_minus_rms, ::length_of(::application_vnd_jcp_javame_midlet_minus_rms) },
		{ ::application_vnd_jisp, ::length_of(::application_vnd_jisp) },
		{ ::application_vnd_joost_joda_minus_archive, ::length_of(::application_vnd_joost_joda_minus_archive) },
		{ ::application_vnd_kahootz, ::length_of(::application_vnd_kahootz) },
		{ ::application_vnd_kde_karbon, ::length_of(::application_vnd_kde_karbon) },
		{ ::application_vnd_kde_kchart, ::length_of(::application_vnd_kde_kchart) },
		{ ::application_vnd_kde_kformula, ::length_of(::application_vnd_kde_kformula) },
		{ ::application_vnd_kde_kivio, ::length_of(::application_vnd_kde_kivio) },
		{ ::application_vnd_kde_kontour, ::length_of(::application_vnd_kde_kontour) },
		{ ::application_vnd_kde_kpresenter, ::length_of(::application_vnd_kde_kpresenter) },
		{ ::application_vnd_kde_kspread, ::length_of(::application_vnd_kde_kspread) },
		{ ::application_vnd_kde_kword, ::length_of(::application_vnd_kde_kword) },
		{ ::application_vnd_kenameaapp, ::length_of(::application_vnd_kenameaapp) },
		{ ::application_vnd_kidspiration, ::length_of(::application_vnd_kidspiration) },
		{ ::application_vnd_kinar, ::length_of(::application_vnd_kinar) },
		{ ::application_vnd_koan, ::length_of(::application_vnd_koan) },
		{ ::application_vnd_kodak_minus_descriptor, ::length_of(::application_vnd_kodak_minus_descriptor) },
		{ ::application_vnd_las_las_plus_xml, ::length_of(::application_vnd_las_las_plus_xml) },
		{ ::application_vnd_llamagraphics_life_minus_balance_desktop, ::length_of(::application_vnd_llamagraphics_life_minus_balance_desktop) },
		{ ::application_vnd_llamagraphics_life_minus_balance_exchange_plus_xml, ::length_of(::application_vnd_llamagraphics_life_minus_balance_exchange_plus_xml) },
		{ ::application_vnd_lotus_minus_1_minus_2_minus_3, ::length_of(::application_vnd_lotus_minus_1_minus_2_minus_3) },
		{ ::application_vnd_lotus_minus_approach, ::length_of(::application_vnd_lotus_minus_approach) },
		{ ::application_vnd_lotus_minus_freelance, ::length_of(::application_vnd_lotus_minus_freelance) },
		{ ::application_vnd_lotus_minus_notes, ::length_of(::application_vnd_lotus_minus_notes) },
		{ ::application_vnd_lotus_minus_organizer, ::length_of(::application_vnd_lotus_minus_organizer) },
		{ ::application_vnd_lotus_minus_screencam, ::length_of(::application_vnd_lotus_minus_screencam) },
		{ ::application_vnd_lotus_minus_wordpro, ::length_of(::application_vnd_lotus_minus_wordpro) },
		{ ::application_vnd_macports_portpkg, ::length_of(::application_vnd_macports_portpkg) },
		{ ::application_vnd_mapbox_minus_vector_minus_tile, ::length_of(::application_vnd_mapbox_minus_vector_minus_tile) },
		{ ::application_vnd_mcd, ::length_of(::application_vnd_mcd) },
		{ ::application_vnd_medcalcdata, ::length_of(::application_vnd_medcalcdata) },
		{ ::application_vnd_mediastation_cdkey, ::length_of(::application_vnd_mediastation_cdkey) },
		{ ::application_vnd_mfer, ::length_of(::application_vnd_mfer) },
		{ ::application_vnd_mfmp, ::length_of(::application_vnd_mfmp) },
		{ ::application_vnd_micrografx_flo, ::length_of(::application_vnd_micrografx_flo) },
		{ ::application_vnd_micrografx_igx, ::length_of(::application_vnd_micrografx_igx) },
		{ ::application_vnd_mif, ::length_of(::application_vnd_mif) },
		{ ::application_vnd_mobius_daf, ::length_of(::application_vnd_mobius_daf) },
		{ ::application_vnd_mobius_dis, ::length_of(::application_vnd_mobius_dis) },
		{ ::application_vnd_mobius_mbk, ::length_of(::application_vnd_mobius_mbk) },
		{ ::application_vnd_mobius_mqy, ::length_of(::application_vnd_mobius_mqy) },
		{ ::application_vnd_mobius_msl, ::length_of(::application_vnd_mobius_msl) },
		{ ::application_vnd_mobius_plc, ::length_of(::application_vnd_mobius_plc) },
		{ ::application_vnd_mobius_txf, ::length_of(::application_vnd_mobius_txf) },
		{ ::application_vnd_mophun_application, ::length_of(::application_vnd_mophun_application) },
		{ ::application_vnd_mophun_certificate, ::length_of(::application_vnd_mophun_certificate) },
		{ ::application_vnd_mozilla_xul_plus_xml, ::length_of(::application_vnd_mozilla_xul_plus_xml) },
		{ ::application_vnd_ms_minus_artgalry, ::length_of(::application_vnd_ms_minus_artgalry) },
		{ ::application_vnd_ms_minus_cab_minus_compressed, ::length_of(::application_vnd_ms_minus_cab_minus_compressed) },
		{ ::application_vnd_ms_minus_excel, ::length_of(::application_vnd_ms_minus_excel) },
		{ ::application_vnd_ms_minus_excel_addin_macroenabled_12, ::length_of(::application_vnd_ms_minus_excel_addin_macroenabled_12) },
		{ ::application_vnd_ms_minus_excel_sheet_binary_macroenabled_12, ::length_of(::application_vnd_ms_minus_excel_sheet_binary_macroenabled_12) },
		{ ::application_vnd_ms_minus_excel_sheet_macroenabled_12, ::length_of(::application_vnd_ms_minus_excel_sheet_macroenabled_12) },
		{ ::application_vnd_ms_minus_excel_template_macroenabled_12, ::length_of(::application_vnd_ms_minus_excel_template_macroenabled_12) },
		{ ::application_vnd_ms_minus_fontobject, ::length_of(::application_vnd_ms_minus_fontobject) },
		{ ::application_vnd_ms_minus_htmlhelp, ::length_of(::application_vnd_ms_minus_htmlhelp) },
		{ ::application_vnd_ms_minus_ims, ::length_of(::application_vnd_ms_minus_ims) },
		{ ::application_vnd_ms_minus_lrm, ::length_of(::application_vnd_ms_minus_lrm) },
		{ ::application_vnd_ms_minus_officetheme, ::length_of(::application_vnd_ms_minus_officetheme) },
		{ ::application_vnd_ms_minus_outlook, ::length_of(::application_vnd_ms_minus_outlook) },
		{ ::application_vnd_ms_minus_pki_seccat, ::length_of(::application_vnd_ms_minus_pki_seccat) },
		{ ::application_vnd_ms_minus_pki_stl, ::length_of(::application_vnd_ms_minus_pki_stl) },
		{ ::application_vnd_ms_minus_powerpoint, ::length_of(::application_vnd_ms_minus_powerpoint) },
		{ ::application_vnd_ms_minus_powerpoint_addin_macroenabled_12, ::length_of(::application_vnd_ms_minus_powerpoint_addin_macroenabled_12) },
		{ ::application_vnd_ms_minus_powerpoint_presentation_macroenabled_12, ::length_of(::application_vnd_ms_minus_powerpoint_presentation_macroenabled_12) },
		{ ::application_vnd_ms_minus_powerpoint_slide_macroenabled_12, ::length_of(::application_vnd_ms_minus_powerpoint_slide_macroenabled_12) },
		{ ::application_vnd_ms_minus_powerpoint_slideshow_macroenabled_12, ::length_of(::application_vnd_ms_minus_powerpoint_slideshow_macroenabled_12) },
		{ ::application_vnd_ms_minus_powerpoint_template_macroenabled_12, ::length_of(::application_vnd_ms_minus_powerpoint_template_macroenabled_12) },
		{ ::application_vnd_ms_minus_project, ::length_of(::application_vnd_ms_minus_project) },
		{ ::application_vnd_ms_minus_word_document_macroenabled_12, ::length_of(::application_vnd_ms_minus_word_document_macroenabled_12) },
		{ ::application_vnd_ms_minus_word_template_macroenabled_12, ::length_of(::application_vnd_ms_minus_word_template_macroenabled_12) },
		{ ::application_vnd_ms_minus_works, ::length_of(::application_vnd_ms_minus_works) },
		{ ::application_vnd_ms_minus_wpl, ::length_of(::application_vnd_ms_minus_wpl) },
		{ ::application_vnd_ms_minus_xpsdocument, ::length_of(::application_vnd_ms_minus_xpsdocument) },
		{ ::application_vnd_mseq, ::length_of(::application_vnd_mseq) },
		{ ::application_vnd_musician, ::length_of(::application_vnd_musician) },
		{ ::application_vnd_muvee_style, ::length_of(::application_vnd_muvee_style) },
		{ ::application_vnd_mynfc, ::length_of(::application_vnd_mynfc) },
		{ ::application_vnd_neurolanguage_nlu, ::length_of(::application_vnd_neurolanguage_nlu) },
		{ ::application_vnd_nitf, ::length_of(::application_vnd_nitf) },
		{ ::application_vnd_noblenet_minus_directory, ::length_of(::application_vnd_noblenet_minus_directory) },
		{ ::application_vnd_noblenet_minus_sealer, ::length_of(::application_vnd_noblenet_minus_sealer) },
		{ ::application_vnd_noblenet_minus_web, ::length_of(::application_vnd_noblenet_minus_web) },
		{ ::application_vnd_nokia_n_minus_gage_ac_plus_xml, ::length_of(::application_vnd_nokia_n_minus_gage_ac_plus_xml) },
		{ ::application_vnd_nokia_n_minus_gage_data, ::length_of(::application_vnd_nokia_n_minus_gage_data) },
		{ ::application_vnd_nokia_n_minus_gage_symbian_install, ::length_of(::application_vnd_nokia_n_minus_gage_symbian_install) },
		{ ::application_vnd_nokia_radio_minus_preset, ::length_of(::application_vnd_nokia_radio_minus_preset) },
		{ ::application_vnd_nokia_radio_minus_presets, ::length_of(::application_vnd_nokia_radio_minus_presets) },
		{ ::application_vnd_novadigm_edm, ::length_of(::application_vnd_novadigm_edm) },
		{ ::application_vnd_novadigm_edx, ::length_of(::application_vnd_novadigm_edx) },
		{ ::application_vnd_novadigm_ext, ::length_of(::application_vnd_novadigm_ext) },
		{ ::application_vnd_oasis_opendocument_chart, ::length_of(::application_vnd_oasis_opendocument_chart) },
		{ ::application_vnd_oasis_opendocument_chart_minus_template, ::length_of(::application_vnd_oasis_opendocument_chart_minus_template) },
		{ ::application_vnd_oasis_opendocument_database, ::length_of(::application_vnd_oasis_opendocument_database) },
		{ ::application_vnd_oasis_opendocument_formula, ::length_of(::application_vnd_oasis_opendocument_formula) },
		{ ::application_vnd_oasis_opendocument_formula_minus_template, ::length_of(::application_vnd_oasis_opendocument_formula_minus_template) },
		{ ::application_vnd_oasis_opendocument_graphics, ::length_of(::application_vnd_oasis_opendocument_graphics) },
		{ ::application_vnd_oasis_opendocument_graphics_minus_template, ::length_of(::application_vnd_oasis_opendocument_graphics_minus_template) },
		{ ::application_vnd_oasis_opendocument_image, ::length_of(::application_vnd_oasis_opendocument_image) },
		{ ::application_vnd_oasis_opendocument_image_minus_template, ::length_of(::application_vnd_oasis_opendocument_image_minus_template) },
		{ ::application_vnd_oasis_opendocument_presentation, ::length_of(::application_vnd_oasis_opendocument_presentation) },
		{ ::application_vnd_oasis_opendocument_presentation_minus_template, ::length_of(::application_vnd_oasis_opendocument_presentation_minus_template) },
		{ ::application_vnd_oasis_opendocument_spreadsheet, ::length_of(::application_vnd_oasis_opendocument_spreadsheet) },
		{ ::application_vnd_oasis_opendocument_spreadsheet_minus_template, ::length_of(::application_vnd_oasis_opendocument_spreadsheet_minus_template) },
		{ ::application_vnd_oasis_opendocument_text, ::length_of(::application_vnd_oasis_opendocument_text) },
		{ ::application_vnd_oasis_opendocument_text_minus_master, ::length_of(::application_vnd_oasis_opendocument_text_minus_master) },
		{ ::application_vnd_oasis_opendocument_text_minus_template, ::length_of(::application_vnd_oasis_opendocument_text_minus_template) },
		{ ::application_vnd_oasis_opendocument_text_minus_web, ::length_of(::application_vnd_oasis_opendocument_text_minus_web) },
		{ ::application_vnd_olpc_minus_sugar, ::length_of(::application_vnd_olpc_minus_sugar) },
		{ ::application_vnd_oma_dd2_plus_xml, ::length_of(::application_vnd_oma_dd2_plus_xml) },
		{ ::application_vnd_openblox_game_plus_xml, ::length_of(::application_vnd_openblox_game_plus_xml) },
		{ ::application_vnd_openofficeorg_extension, ::length_of(::application_vnd_openofficeorg_extension) },
		{ ::application_vnd_openstreetmap_data_plus_xml, ::length_of(::application_vnd_openstreetmap_data_plus_xml) },
		{ ::application_vnd_openxmlformats_minus_officedocument_presentationml_presentation, ::length_of(::application_vnd_openxmlformats_minus_officedocument_presentationml_presentation) },
		{ ::application_vnd_openxmlformats_minus_officedocument_presentationml_slide, ::length_of(::application_vnd_openxmlformats_minus_officedocument_presentationml_slide) },
		{ ::application_vnd_openxmlformats_minus_officedocument_presentationml_slideshow, ::length_of(::application_vnd_openxmlformats_minus_officedocument_presentationml_slideshow) },
		{ ::application_vnd_openxmlformats_minus_officedocument_presentationml_template, ::length_of(::application_vnd_openxmlformats_minus_officedocument_presentationml_template) },
		{ ::application_vnd_openxmlformats_minus_officedocument_spreadsheetml_sheet, ::length_of(::application_vnd_openxmlformats_minus_officedocument_spreadsheetml_sheet) },
		{ ::application_vnd_openxmlformats_minus_officedocument_spreadsheetml_template, ::length_of(::application_vnd_openxmlformats_minus_officedocument_spreadsheetml_template) },
		{ ::application_vnd_openxmlformats_minus_officedocument_wordprocessingml_document, ::length_of(::application_vnd_openxmlformats_minus_officedocument_wordprocessingml_document) },
		{ ::application_vnd_openxmlformats_minus_officedocument_wordprocessingml_template, ::length_of(::application_vnd_openxmlformats_minus_officedocument_wordprocessingml_template) },
		{ ::application_vnd_osgeo_mapguide_package, ::length_of(::application_vnd_osgeo_mapguide_package) },
		{ ::application_vnd_osgi_dp, ::length_of(::application_vnd_osgi_dp) },
		{ ::application_vnd_osgi_subsystem, ::length_of(::application_vnd_osgi_subsystem) },
		{ ::application_vnd_palm, ::length_of(::application_vnd_palm) },
		{ ::application_vnd_pawaafile, ::length_of(::application_vnd_pawaafile) },
		{ ::application_vnd_pg_format, ::length_of(::application_vnd_pg_format) },
		{ ::application_vnd_pg_osasli, ::length_of(::application_vnd_pg_osasli) },
		{ ::application_vnd_picsel, ::length_of(::application_vnd_picsel) },
		{ ::application_vnd_pmi_widget, ::length_of(::application_vnd_pmi_widget) },
		{ ::application_vnd_pocketlearn, ::length_of(::application_vnd_pocketlearn) },
		{ ::application_vnd_powerbuilder6, ::length_of(::application_vnd_powerbuilder6) },
		{ ::application_vnd_previewsystems_box, ::length_of(::application_vnd_previewsystems_box) },
		{ ::application_vnd_proteus_magazine, ::length_of(::application_vnd_proteus_magazine) },
		{ ::application_vnd_publishare_minus_delta_minus_tree, ::length_of(::application_vnd_publishare_minus_delta_minus_tree) },
		{ ::application_vnd_pvi_ptid1, ::length_of(::application_vnd_pvi_ptid1) },
		{ ::application_vnd_quark_quarkxpress, ::length_of(::application_vnd_quark_quarkxpress) },
		{ ::application_vnd_rar, ::length_of(::application_vnd_rar) },
		{ ::application_vnd_realvnc_bed, ::length_of(::application_vnd_realvnc_bed) },
		{ ::application_vnd_recordare_musicxml, ::length_of(::application_vnd_recordare_musicxml) },
		{ ::application_vnd_recordare_musicxml_plus_xml, ::length_of(::application_vnd_recordare_musicxml_plus_xml) },
		{ ::application_vnd_rig_cryptonote, ::length_of(::application_vnd_rig_cryptonote) },
		{ ::application_vnd_rim_cod, ::length_of(::application_vnd_rim_cod) },
		{ ::application_vnd_rn_minus_realmedia, ::length_of(::application_vnd_rn_minus_realmedia) },
		{ ::application_vnd_rn_minus_realmedia_minus_vbr, ::length_of(::application_vnd_rn_minus_realmedia_minus_vbr) },
		{ ::application_vnd_route66_link66_plus_xml, ::length_of(::application_vnd_route66_link66_plus_xml) },
		{ ::application_vnd_sailingtracker_track, ::length_of(::application_vnd_sailingtracker_track) },
		{ ::application_vnd_seemail, ::length_of(::application_vnd_seemail) },
		{ ::application_vnd_sema, ::length_of(::application_vnd_sema) },
		{ ::application_vnd_semd, ::length_of(::application_vnd_semd) },
		{ ::application_vnd_semf, ::length_of(::application_vnd_semf) },
		{ ::application_vnd_shana_informed_formdata, ::length_of(::application_vnd_shana_informed_formdata) },
		{ ::application_vnd_shana_informed_formtemplate, ::length_of(::application_vnd_shana_informed_formtemplate) },
		{ ::application_vnd_shana_informed_interchange, ::length_of(::application_vnd_shana_informed_interchange) },
		{ ::application_vnd_shana_informed_package, ::length_of(::application_vnd_shana_informed_package) },
		{ ::application_vnd_simtech_minus_mindmapper, ::length_of(::application_vnd_simtech_minus_mindmapper) },
		{ ::application_vnd_smaf, ::length_of(::application_vnd_smaf) },
		{ ::application_vnd_smart_teacher, ::length_of(::application_vnd_smart_teacher) },
		{ ::application_vnd_software602_filler_form_plus_xml, ::length_of(::application_vnd_software602_filler_form_plus_xml) },
		{ ::application_vnd_solent_sdkm_plus_xml, ::length_of(::application_vnd_solent_sdkm_plus_xml) },
		{ ::application_vnd_spotfire_dxp, ::length_of(::application_vnd_spotfire_dxp) },
		{ ::application_vnd_spotfire_sfs, ::length_of(::application_vnd_spotfire_sfs) },
		{ ::application_vnd_stardivision_calc, ::length_of(::application_vnd_stardivision_calc) },
		{ ::application_vnd_stardivision_draw, ::length_of(::application_vnd_stardivision_draw) },
		{ ::application_vnd_stardivision_impress, ::length_of(::application_vnd_stardivision_impress) },
		{ ::application_vnd_stardivision_math, ::length_of(::application_vnd_stardivision_math) },
		{ ::application_vnd_stardivision_writer, ::length_of(::application_vnd_stardivision_writer) },
		{ ::application_vnd_stardivision_writer_minus_global, ::length_of(::application_vnd_stardivision_writer_minus_global) },
		{ ::application_vnd_stepmania_package, ::length_of(::application_vnd_stepmania_package) },
		{ ::application_vnd_stepmania_stepchart, ::length_of(::application_vnd_stepmania_stepchart) },
		{ ::application_vnd_sun_wadl_plus_xml, ::length_of(::application_vnd_sun_wadl_plus_xml) },
		{ ::application_vnd_sun_xml_calc, ::length_of(::application_vnd_sun_xml_calc) },
		{ ::application_vnd_sun_xml_calc_template, ::length_of(::application_vnd_sun_xml_calc_template) },
		{ ::application_vnd_sun_xml_draw, ::length_of(::application_vnd_sun_xml_draw) },
		{ ::application_vnd_sun_xml_draw_template, ::length_of(::application_vnd_sun_xml_draw_template) },
		{ ::application_vnd_sun_xml_impress, ::length_of(::application_vnd_sun_xml_impress) },
		{ ::application_vnd_sun_xml_impress_template, ::length_of(::application_vnd_sun_xml_impress_template) },
		{ ::application_vnd_sun_xml_math, ::length_of(::application_vnd_sun_xml_math) },
		{ ::application_vnd_sun_xml_writer, ::length_of(::application_vnd_sun_xml_writer) },
		{ ::application_vnd_sun_xml_writer_global, ::length_of(::application_vnd_sun_xml_writer_global) },
		{ ::application_vnd_sun_xml_writer_template, ::length_of(::application_vnd_sun_xml_writer_template) },
		{ ::application_vnd_sus_minus_calendar, ::length_of(::application_vnd_sus_minus_calendar) },
		{ ::application_vnd_svd, ::length_of(::application_vnd_svd) },
		{ ::application_vnd_symbian_install, ::length_of(::application_vnd_symbian_install) },
		{ ::application_vnd_syncml_plus_xml, ::length_of(::application_vnd_syncml_plus_xml) },
		{ ::application_vnd_syncml_dm_plus_wbxml, ::length_of(::application_vnd_syncml_dm_plus_wbxml) },
		{ ::application_vnd_syncml_dm_plus_xml, ::length_of(::application_vnd_syncml_dm_plus_xml) },
		{ ::application_vnd_syncml_dmddf_plus_xml, ::length_of(::application_vnd_syncml_dmddf_plus_xml) },
		{ ::application_vnd_tao_intent_minus_module_minus_archive, ::length_of(::application_vnd_tao_intent_minus_module_minus_archive) },
		{ ::application_vnd_tcpdump_pcap, ::length_of(::application_vnd_tcpdump_pcap) },
		{ ::application_vnd_tmobile_minus_livetv, ::length_of(::application_vnd_tmobile_minus_livetv) },
		{ ::application_vnd_trid_tpt, ::length_of(::application_vnd_trid_tpt) },
		{ ::application_vnd_triscape_mxs, ::length_of(::application_vnd_triscape_mxs) },
		{ ::application_vnd_trueapp, ::length_of(::application_vnd_trueapp) },
		{ ::application_vnd_ufdl, ::length_of(::application_vnd_ufdl) },
		{ ::application_vnd_uiq_theme, ::length_of(::application_vnd_uiq_theme) },
		{ ::application_vnd_umajin, ::length_of(::application_vnd_umajin) },
		{ ::application_vnd_unity, ::length_of(::application_vnd_unity) },
		{ ::application_vnd_uoml_plus_xml, ::length_of(::application_vnd_uoml_plus_xml) },
		{ ::application_vnd_vcx, ::length_of(::application_vnd_vcx) },
		{ ::application_vnd_visio, ::length_of(::application_vnd_visio) },
		{ ::application_vnd_visionary, ::length_of(::application_vnd_visionary) },
		{ ::application_vnd_vsf, ::length_of(::application_vnd_vsf) },
		{ ::application_vnd_wap_wbxml, ::length_of(::application_vnd_wap_wbxml) },
		{ ::application_vnd_wap_wmlc, ::length_of(::application_vnd_wap_wmlc) },
		{ ::application_vnd_wap_wmlscriptc, ::length_of(::application_vnd_wap_wmlscriptc) },
		{ ::application_vnd_webturbo, ::length_of(::application_vnd_webturbo) },
		{ ::application_vnd_wolfram_player, ::length_of(::application_vnd_wolfram_player) },
		{ ::application_vnd_wordperfect, ::length_of(::application_vnd_wordperfect) },
		{ ::application_vnd_wqd, ::length_of(::application_vnd_wqd) },
		{ ::application_vnd_wt_stf, ::length_of(::application_vnd_wt_stf) },
		{ ::application_vnd_xara, ::length_of(::application_vnd_xara) },
		{ ::application_vnd_xfdl, ::length_of(::application_vnd_xfdl) },
		{ ::application_vnd_yamaha_hv_minus_dic, ::length_of(::application_vnd_yamaha_hv_minus_dic) },
		{ ::application_vnd_yamaha_hv_minus_script, ::length_of(::application_vnd_yamaha_hv_minus_script) },
		{ ::application_vnd_yamaha_hv_minus_voice, ::length_of(::application_vnd_yamaha_hv_minus_voice) },
		{ ::application_vnd_yamaha_openscoreformat, ::length_of(::application_vnd_yamaha_openscoreformat) },
		{ ::application_vnd_yamaha_openscoreformat_osfpvg_plus_xml, ::length_of(::application_vnd_yamaha_openscoreformat_osfpvg_plus_xml) },
		{ ::application_vnd_yamaha_smaf_minus_audio, ::length_of(::application_vnd_yamaha_smaf_minus_audio) },
		{ ::application_vnd_yamaha_smaf_minus_phrase, ::length_of(::application_vnd_yamaha_smaf_minus_phrase) },
		{ ::application_vnd_yellowriver_minus_custom_minus_menu, ::length_of(::application_vnd_yellowriver_minus_custom_minus_menu) },
		{ ::application_vnd_zul, ::length_of(::application_vnd_zul) },
		{ ::application_vnd_zzazz_deck_plus_xml, ::length_of(::application_vnd_zzazz_deck_plus_xml) },
		{ ::application_voicexml_plus_xml, ::length_of(::application_voicexml_plus_xml) },
		{ ::application_wasm, ::length_of(::application_wasm) },
		{ ::application_watcherinfo_plus_xml, ::length_of(::application_watcherinfo_plus_xml) },
		{ ::application_widget, ::length_of(::application_widget) },
		{ ::application_winhlp, ::length_of(::application_winhlp) },
		{ ::application_wsdl_plus_xml, ::length_of(::application_wsdl_plus_xml) },
		{ ::application_wspolicy_plus_xml, ::length_of(::application_wspolicy_plus_xml) },
		{ ::application_x_minus_7z_minus_compressed, ::length_of(::application_x_minus_7z_minus_compressed) },
		{ ::application_x_minus_abiword, ::length_of(::application_x_minus_abiword) },
		{ ::application_x_minus_ace_minus_compressed, ::length_of(::application_x_minus_ace_minus_compressed) },
		{ ::application_x_minus_apple_minus_diskimage, ::length_of(::application_x_minus_apple_minus_diskimage) },
		{ ::application_x_minus_arj, ::length_of(::application_x_minus_arj) },
		{ ::application_x_minus_authorware_minus_bin, ::length_of(::application_x_minus_authorware_minus_bin) },
		{ ::application_x_minus_authorware_minus_map, ::length_of(::application_x_minus_authorware_minus_map) },
		{ ::application_x_minus_authorware_minus_seg, ::length_of(::application_x_minus_authorware_minus_seg) },
		{ ::application_x_minus_bcpio, ::length_of(::application_x_minus_bcpio) },
		{ ::application_x_minus_bdoc, ::length_of(::application_x_minus_bdoc) },
		{ ::application_x_minus_bittorrent, ::length_of(::application_x_minus_bittorrent) },
		{ ::application_x_minus_blorb, ::length_of(::application_x_minus_blorb) },
		{ ::application_x_minus_bzip, ::length_of(::application_x_minus_bzip) },
		{ ::application_x_minus_bzip2, ::length_of(::application_x_minus_bzip2) },
		{ ::application_x_minus_cbr, ::length_of(::application_x_minus_cbr) },
		{ ::application_x_minus_cdlink, ::length_of(::application_x_minus_cdlink) },
		{ ::application_x_minus_cfs_minus_compressed, ::length_of(::application_x_minus_cfs_minus_compressed) },
		{ ::application_x_minus_chat, ::length_of(::application_x_minus_chat) },
		{ ::application_x_minus_chess_minus_pgn, ::length_of(::application_x_minus_chess_minus_pgn) },
		{ ::application_x_minus_chrome_minus_extension, ::length_of(::application_x_minus_chrome_minus_extension) },
		{ ::application_x_minus_cocoa, ::length_of(::application_x_minus_cocoa) },
		{ ::application_x_minus_conference, ::length_of(::application_x_minus_conference) },
		{ ::application_x_minus_cpio, ::length_of(::application_x_minus_cpio) },
		{ ::application_x_minus_csh, ::length_of(::application_x_minus_csh) },
		{ ::application_x_minus_debian_minus_package, ::length_of(::application_x_minus_debian_minus_package) },
		{ ::application_x_minus_dgc_minus_compressed, ::length_of(::application_x_minus_dgc_minus_compressed) },
		{ ::application_x_minus_director, ::length_of(::application_x_minus_director) },
		{ ::application_x_minus_doom, ::length_of(::application_x_minus_doom) },
		{ ::application_x_minus_dtbncx_plus_xml, ::length_of(::application_x_minus_dtbncx_plus_xml) },
		{ ::application_x_minus_dtbook_plus_xml, ::length_of(::application_x_minus_dtbook_plus_xml) },
		{ ::application_x_minus_dtbresource_plus_xml, ::length_of(::application_x_minus_dtbresource_plus_xml) },
		{ ::application_x_minus_dvi, ::length_of(::application_x_minus_dvi) },
		{ ::application_x_minus_envoy, ::length_of(::application_x_minus_envoy) },
		{ ::application_x_minus_eva, ::length_of(::application_x_minus_eva) },
		{ ::application_x_minus_font_minus_bdf, ::length_of(::application_x_minus_font_minus_bdf) },
		{ ::application_x_minus_font_minus_ghostscript, ::length_of(::application_x_minus_font_minus_ghostscript) },
		{ ::application_x_minus_font_minus_linux_minus_psf, ::length_of(::application_x_minus_font_minus_linux_minus_psf) },
		{ ::application_x_minus_font_minus_pcf, ::length_of(::application_x_minus_font_minus_pcf) },
		{ ::application_x_minus_font_minus_snf, ::length_of(::application_x_minus_font_minus_snf) },
		{ ::application_x_minus_font_minus_type1, ::length_of(::application_x_minus_font_minus_type1) },
		{ ::application_x_minus_freearc, ::length_of(::application_x_minus_freearc) },
		{ ::application_x_minus_futuresplash, ::length_of(::application_x_minus_futuresplash) },
		{ ::application_x_minus_gca_minus_compressed, ::length_of(::application_x_minus_gca_minus_compressed) },
		{ ::application_x_minus_glulx, ::length_of(::application_x_minus_glulx) },
		{ ::application_x_minus_gnumeric, ::length_of(::application_x_minus_gnumeric) },
		{ ::application_x_minus_gramps_minus_xml, ::length_of(::application_x_minus_gramps_minus_xml) },
		{ ::application_x_minus_gtar, ::length_of(::application_x_minus_gtar) },
		{ ::application_x_minus_hdf, ::length_of(::application_x_minus_hdf) },
		{ ::application_x_minus_httpd_minus_php, ::length_of(::application_x_minus_httpd_minus_php) },
		{ ::application_x_minus_install_minus_instructions, ::length_of(::application_x_minus_install_minus_instructions) },
		{ ::application_x_minus_iso9660_minus_image, ::length_of(::application_x_minus_iso9660_minus_image) },
		{ ::application_x_minus_iwork_minus_keynote_minus_sffkey, ::length_of(::application_x_minus_iwork_minus_keynote_minus_sffkey) },
		{ ::application_x_minus_iwork_minus_numbers_minus_sffnumbers, ::length_of(::application_x_minus_iwork_minus_numbers_minus_sffnumbers) },
		{ ::application_x_minus_iwork_minus_pages_minus_sffpages, ::length_of(::application_x_minus_iwork_minus_pages_minus_sffpages) },
		{ ::application_x_minus_java_minus_archive_minus_diff, ::length_of(::application_x_minus_java_minus_archive_minus_diff) },
		{ ::application_x_minus_java_minus_jnlp_minus_file, ::length_of(::application_x_minus_java_minus_jnlp_minus_file) },
		{ ::application_x_minus_keepass2, ::length_of(::application_x_minus_keepass2) },
		{ ::application_x_minus_latex, ::length_of(::application_x_minus_latex) },
		{ ::application_x_minus_lua_minus_bytecode, ::length_of(::application_x_minus_lua_minus_bytecode) },
		{ ::application_x_minus_lzh_minus_compressed, ::length_of(::application_x_minus_lzh_minus_compressed) },
		{ ::application_x_minus_makeself, ::length_of(::application_x_minus_makeself) },
		{ ::application_x_minus_mie, ::length_of(::application_x_minus_mie) },
		{ ::application_x_minus_mobipocket_minus_ebook, ::length_of(::application_x_minus_mobipocket_minus_ebook) },
		{ ::application_x_minus_ms_minus_application, ::length_of(::application_x_minus_ms_minus_application) },
		{ ::application_x_minus_ms_minus_shortcut, ::length_of(::application_x_minus_ms_minus_shortcut) },
		{ ::application_x_minus_ms_minus_wmd, ::length_of(::application_x_minus_ms_minus_wmd) },
		{ ::application_x_minus_ms_minus_wmz, ::length_of(::application_x_minus_ms_minus_wmz) },
		{ ::application_x_minus_ms_minus_xbap, ::length_of(::application_x_minus_ms_minus_xbap) },
		{ ::application_x_minus_msaccess, ::length_of(::application_x_minus_msaccess) },
		{ ::application_x_minus_msbinder, ::length_of(::application_x_minus_msbinder) },
		{ ::application_x_minus_mscardfile, ::length_of(::application_x_minus_mscardfile) },
		{ ::application_x_minus_msclip, ::length_of(::application_x_minus_msclip) },
		{ ::application_x_minus_msdos_minus_program, ::length_of(::application_x_minus_msdos_minus_program) },
		{ ::application_x_minus_msdownload, ::length_of(::application_x_minus_msdownload) },
		{ ::application_x_minus_msmediaview, ::length_of(::application_x_minus_msmediaview) },
		{ ::application_x_minus_msmetafile, ::length_of(::application_x_minus_msmetafile) },
		{ ::application_x_minus_msmoney, ::length_of(::application_x_minus_msmoney) },
		{ ::application_x_minus_mspublisher, ::length_of(::application_x_minus_mspublisher) },
		{ ::application_x_minus_msschedule, ::length_of(::application_x_minus_msschedule) },
		{ ::application_x_minus_msterminal, ::length_of(::application_x_minus_msterminal) },
		{ ::application_x_minus_mswrite, ::length_of(::application_x_minus_mswrite) },
		{ ::application_x_minus_netcdf, ::length_of(::application_x_minus_netcdf) },
		{ ::application_x_minus_ns_minus_proxy_minus_autoconfig, ::length_of(::application_x_minus_ns_minus_proxy_minus_autoconfig) },
		{ ::application_x_minus_nzb, ::length_of(::application_x_minus_nzb) },
		{ ::application_x_minus_perl, ::length_of(::application_x_minus_perl) },
		{ ::application_x_minus_pilot, ::length_of(::application_x_minus_pilot) },
		{ ::application_x_minus_pkcs12, ::length_of(::application_x_minus_pkcs12) },
		{ ::application_x_minus_pkcs7_minus_certificates, ::length_of(::application_x_minus_pkcs7_minus_certificates) },
		{ ::application_x_minus_pkcs7_minus_certreqresp, ::length_of(::application_x_minus_pkcs7_minus_certreqresp) },
		{ ::application_x_minus_rar_minus_compressed, ::length_of(::application_x_minus_rar_minus_compressed) },
		{ ::application_x_minus_redhat_minus_package_minus_manager, ::length_of(::application_x_minus_redhat_minus_package_minus_manager) },
		{ ::application_x_minus_research_minus_info_minus_systems, ::length_of(::application_x_minus_research_minus_info_minus_systems) },
		{ ::application_x_minus_sea, ::length_of(::application_x_minus_sea) },
		{ ::application_x_minus_sh, ::length_of(::application_x_minus_sh) },
		{ ::application_x_minus_shar, ::length_of(::application_x_minus_shar) },
		{ ::application_x_minus_shockwave_minus_flash, ::length_of(::application_x_minus_shockwave_minus_flash) },
		{ ::application_x_minus_silverlight_minus_app, ::length_of(::application_x_minus_silverlight_minus_app) },
		{ ::application_x_minus_sql, ::length_of(::application_x_minus_sql) },
		{ ::application_x_minus_stuffit, ::length_of(::application_x_minus_stuffit) },
		{ ::application_x_minus_stuffitx, ::length_of(::application_x_minus_stuffitx) },
		{ ::application_x_minus_subrip, ::length_of(::application_x_minus_subrip) },
		{ ::application_x_minus_sv4cpio, ::length_of(::application_x_minus_sv4cpio) },
		{ ::application_x_minus_sv4crc, ::length_of(::application_x_minus_sv4crc) },
		{ ::application_x_minus_t3vm_minus_image, ::length_of(::application_x_minus_t3vm_minus_image) },
		{ ::application_x_minus_tads, ::length_of(::application_x_minus_tads) },
		{ ::application_x_minus_tar, ::length_of(::application_x_minus_tar) },
		{ ::application_x_minus_tcl, ::length_of(::application_x_minus_tcl) },
		{ ::application_x_minus_tex, ::length_of(::application_x_minus_tex) },
		{ ::application_x_minus_tex_minus_tfm, ::length_of(::application_x_minus_tex_minus_tfm) },
		{ ::application_x_minus_texinfo, ::length_of(::application_x_minus_texinfo) },
		{ ::application_x_minus_tgif, ::length_of(::application_x_minus_tgif) },
		{ ::application_x_minus_ustar, ::length_of(::application_x_minus_ustar) },
		{ ::application_x_minus_virtualbox_minus_hdd, ::length_of(::application_x_minus_virtualbox_minus_hdd) },
		{ ::application_x_minus_virtualbox_minus_ova, ::length_of(::application_x_minus_virtualbox_minus_ova) },
		{ ::application_x_minus_virtualbox_minus_ovf, ::length_of(::application_x_minus_virtualbox_minus_ovf) },
		{ ::application_x_minus_virtualbox_minus_vbox, ::length_of(::application_x_minus_virtualbox_minus_vbox) },
		{ ::application_x_minus_virtualbox_minus_vbox_minus_extpack, ::length_of(::application_x_minus_virtualbox_minus_vbox_minus_extpack) },
		{ ::application_x_minus_virtualbox_minus_vdi, ::length_of(::application_x_minus_virtualbox_minus_vdi) },
		{ ::application_x_minus_virtualbox_minus_vhd, ::length_of(::application_x_minus_virtualbox_minus_vhd) },
		{ ::application_x_minus_virtualbox_minus_vmdk, ::length_of(::application_x_minus_virtualbox_minus_vmdk) },
		{ ::application_x_minus_wais_minus_source, ::length_of(::application_x_minus_wais_minus_source) },
		{ ::application_x_minus_web_minus_app_minus_manifest_plus_json, ::length_of(::application_x_minus_web_minus_app_minus_manifest_plus_json) },
		{ ::application_x_minus_x509_minus_ca_minus_cert, ::length_of(::application_x_minus_x509_minus_ca_minus_cert) },
		{ ::application_x_minus_xfig, ::length_of(::application_x_minus_xfig) },
		{ ::application_x_minus_xliff_plus_xml, ::length_of(::application_x_minus_xliff_plus_xml) },
		{ ::application_x_minus_xpinstall, ::length_of(::application_x_minus_xpinstall) },
		{ ::application_x_minus_xz, ::length_of(::application_x_minus_xz) },
		{ ::application_x_minus_zmachine, ::length_of(::application_x_minus_zmachine) },
		{ ::application_xaml_plus_xml, ::length_of(::application_xaml_plus_xml) },
		{ ::application_xcap_minus_att_plus_xml, ::length_of(::application_xcap_minus_att_plus_xml) },
		{ ::application_xcap_minus_caps_plus_xml, ::length_of(::application_xcap_minus_caps_plus_xml) },
		{ ::application_xcap_minus_diff_plus_xml, ::length_of(::application_xcap_minus_diff_plus_xml) },
		{ ::application_xcap_minus_el_plus_xml, ::length_of(::application_xcap_minus_el_plus_xml) },
		{ ::application_xcap_minus_ns_plus_xml, ::length_of(::application_xcap_minus_ns_plus_xml) },
		{ ::application_xenc_plus_xml, ::length_of(::application_xenc_plus_xml) },
		{ ::application_xhtml_plus_xml, ::length_of(::application_xhtml_plus_xml) },
		{ ::application_xliff_plus_xml, ::length_of(::application_xliff_plus_xml) },
		{ ::application_xml, ::length_of(::application_xml) },
		{ ::application_xml_minus_dtd, ::length_of(::application_xml_minus_dtd) },
		{ ::application_xop_plus_xml, ::length_of(::application_xop_plus_xml) },
		{ ::application_xproc_plus_xml, ::length_of(::application_xproc_plus_xml) },
		{ ::application_xslt_plus_xml, ::length_of(::application_xslt_plus_xml) },
		{ ::application_xspf_plus_xml, ::length_of(::application_xspf_plus_xml) },
		{ ::application_xv_plus_xml, ::length_of(::application_xv_plus_xml) },
		{ ::application_yang, ::length_of(::application_yang) },
		{ ::application_yin_plus_xml, ::length_of(::application_yin_plus_xml) },
		{ ::application_zip, ::length_of(::application_zip) },
		{ ::audio_3gpp, ::length_of(::audio_3gpp) },
		{ ::audio_adpcm, ::length_of(::audio_adpcm) },
		{ ::audio_amr, ::length_of(::audio_amr) },
		{ ::audio_basic, ::length_of(::audio_basic) },
		{ ::audio_midi, ::length_of(::audio_midi) },
		{ ::audio_mobile_minus_xmf, ::length_of(::audio_mobile_minus_xmf) },
		{ ::audio_mp3, ::length_of(::audio_mp3) },
		{ ::audio_mp4, ::length_of(::audio_mp4) },
		{ ::audio_mpeg, ::length_of(::audio_mpeg) },
		{ ::audio_ogg, ::length_of(::audio_ogg) },
		{ ::audio_s3m, ::length_of(::audio_s3m) },
		{ ::audio_silk, ::length_of(::audio_silk) },
		{ ::audio_vnd_dece_audio, ::length_of(::audio_vnd_dece_audio) },
		{ ::audio_vnd_digital_minus_winds, ::length_of(::audio_vnd_digital_minus_winds) },
		{ ::audio_vnd_dra, ::length_of(::audio_vnd_dra) },
		{ ::audio_vnd_dts, ::length_of(::audio_vnd_dts) },
		{ ::audio_vnd_dts_hd, ::length_of(::audio_vnd_dts_hd) },
		{ ::audio_vnd_lucent_voice, ::length_of(::audio_vnd_lucent_voice) },
		{ ::audio_vnd_ms_minus_playready_media_pya, ::length_of(::audio_vnd_ms_minus_playready_media_pya) },
		{ ::audio_vnd_nuera_ecelp4800, ::length_of(::audio_vnd_nuera_ecelp4800) },
		{ ::audio_vnd_nuera_ecelp7470, ::length_of(::audio_vnd_nuera_ecelp7470) },
		{ ::audio_vnd_nuera_ecelp9600, ::length_of(::audio_vnd_nuera_ecelp9600) },
		{ ::audio_vnd_rip, ::length_of(::audio_vnd_rip) },
		{ ::audio_wav, ::length_of(::audio_wav) },
		{ ::audio_wave, ::length_of(::audio_wave) },
		{ ::audio_webm, ::length_of(::audio_webm) },
		{ ::audio_x_minus_aac, ::length_of(::audio_x_minus_aac) },
		{ ::audio_x_minus_aiff, ::length_of(::audio_x_minus_aiff) },
		{ ::audio_x_minus_caf, ::length_of(::audio_x_minus_caf) },
		{ ::audio_x_minus_flac, ::length_of(::audio_x_minus_flac) },
		{ ::audio_x_minus_m4a, ::length_of(::audio_x_minus_m4a) },
		{ ::audio_x_minus_matroska, ::length_of(::audio_x_minus_matroska) },
		{ ::audio_x_minus_mpegurl, ::length_of(::audio_x_minus_mpegurl) },
		{ ::audio_x_minus_ms_minus_wax, ::length_of(::audio_x_minus_ms_minus_wax) },
		{ ::audio_x_minus_ms_minus_wma, ::length_of(::audio_x_minus_ms_minus_wma) },
		{ ::audio_x_minus_pn_minus_realaudio, ::length_of(::audio_x_minus_pn_minus_realaudio) },
		{ ::audio_x_minus_pn_minus_realaudio_minus_plugin, ::length_of(::audio_x_minus_pn_minus_realaudio_minus_plugin) },
		{ ::audio_x_minus_realaudio, ::length_of(::audio_x_minus_realaudio) },
		{ ::audio_x_minus_wav, ::length_of(::audio_x_minus_wav) },
		{ ::audio_xm, ::length_of(::audio_xm) },
		{ ::chemical_x_minus_cdx, ::length_of(::chemical_x_minus_cdx) },
		{ ::chemical_x_minus_cif, ::length_of(::chemical_x_minus_cif) },
		{ ::chemical_x_minus_cmdf, ::length_of(::chemical_x_minus_cmdf) },
		{ ::chemical_x_minus_cml, ::length_of(::chemical_x_minus_cml) },
		{ ::chemical_x_minus_csml, ::length_of(::chemical_x_minus_csml) },
		{ ::chemical_x_minus_xyz, ::length_of(::chemical_x_minus_xyz) },
		{ ::font_collection, ::length_of(::font_collection) },
		{ ::font_otf, ::length_of(::font_otf) },
		{ ::font_ttf, ::length_of(::font_ttf) },
		{ ::font_woff, ::length_of(::font_woff) },
		{ ::font_woff2, ::length_of(::font_woff2) },
		{ ::image_aces, ::length_of(::image_aces) },
		{ ::image_apng, ::length_of(::image_apng) },
		{ ::image_avci, ::length_of(::image_avci) },
		{ ::image_avcs, ::length_of(::image_avcs) },
		{ ::image_avif, ::length_of(::image_avif) },
		{ ::image_bmp, ::length_of(::image_bmp) },
		{ ::image_cgm, ::length_of(::image_cgm) },
		{ ::image_dicom_minus_rle, ::length_of(::image_dicom_minus_rle) },
		{ ::image_emf, ::length_of(::image_emf) },
		{ ::image_fits, ::length_of(::image_fits) },
		{ ::image_g3fax, ::length_of(::image_g3fax) },
		{ ::image_gif, ::length_of(::image_gif) },
		{ ::image_heic, ::length_of(::image_heic) },
		{ ::image_heic_minus_sequence, ::length_of(::image_heic_minus_sequence) },
		{ ::image_heif, ::length_of(::image_heif) },
		{ ::image_heif_minus_sequence, ::length_of(::image_heif_minus_sequence) },
		{ ::image_hej2k, ::length_of(::image_hej2k) },
		{ ::image_hsj2, ::length_of(::image_hsj2) },
		{ ::image_ief, ::length_of(::image_ief) },
		{ ::image_jls, ::length_of(::image_jls) },
		{ ::image_jp2, ::length_of(::image_jp2) },
		{ ::image_jpeg, ::length_of(::image_jpeg) },
		{ ::image_jph, ::length_of(::image_jph) },
		{ ::image_jphc, ::length_of(::image_jphc) },
		{ ::image_jpm, ::length_of(::image_jpm) },
		{ ::image_jpx, ::length_of(::image_jpx) },
		{ ::image_jxr, ::length_of(::image_jxr) },
		{ ::image_jxra, ::length_of(::image_jxra) },
		{ ::image_jxrs, ::length_of(::image_jxrs) },
		{ ::image_jxs, ::length_of(::image_jxs) },
		{ ::image_jxsc, ::length_of(::image_jxsc) },
		{ ::image_jxsi, ::length_of(::image_jxsi) },
		{ ::image_jxss, ::length_of(::image_jxss) },
		{ ::image_ktx, ::length_of(::image_ktx) },
		{ ::image_ktx2, ::length_of(::image_ktx2) },
		{ ::image_png, ::length_of(::image_png) },
		{ ::image_prs_btif, ::length_of(::image_prs_btif) },
		{ ::image_prs_pti, ::length_of(::image_prs_pti) },
		{ ::image_sgi, ::length_of(::image_sgi) },
		{ ::image_svg_plus_xml, ::length_of(::image_svg_plus_xml) },
		{ ::image_t38, ::length_of(::image_t38) },
		{ ::image_tiff, ::length_of(::image_tiff) },
		{ ::image_tiff_minus_fx, ::length_of(::image_tiff_minus_fx) },
		{ ::image_vnd_adobe_photoshop, ::length_of(::image_vnd_adobe_photoshop) },
		{ ::image_vnd_airzip_accelerator_azv, ::length_of(::image_vnd_airzip_accelerator_azv) },
		{ ::image_vnd_dece_graphic, ::length_of(::image_vnd_dece_graphic) },
		{ ::image_vnd_djvu, ::length_of(::image_vnd_djvu) },
		{ ::image_vnd_dvb_subtitle, ::length_of(::image_vnd_dvb_subtitle) },
		{ ::image_vnd_dwg, ::length_of(::image_vnd_dwg) },
		{ ::image_vnd_dxf, ::length_of(::image_vnd_dxf) },
		{ ::image_vnd_fastbidsheet, ::length_of(::image_vnd_fastbidsheet) },
		{ ::image_vnd_fpx, ::length_of(::image_vnd_fpx) },
		{ ::image_vnd_fst, ::length_of(::image_vnd_fst) },
		{ ::image_vnd_fujixerox_edmics_minus_mmr, ::length_of(::image_vnd_fujixerox_edmics_minus_mmr) },
		{ ::image_vnd_fujixerox_edmics_minus_rlc, ::length_of(::image_vnd_fujixerox_edmics_minus_rlc) },
		{ ::image_vnd_microsoft_icon, ::length_of(::image_vnd_microsoft_icon) },
		{ ::image_vnd_ms_minus_dds, ::length_of(::image_vnd_ms_minus_dds) },
		{ ::image_vnd_ms_minus_modi, ::length_of(::image_vnd_ms_minus_modi) },
		{ ::image_vnd_ms_minus_photo, ::length_of(::image_vnd_ms_minus_photo) },
		{ ::image_vnd_net_minus_fpx, ::length_of(::image_vnd_net_minus_fpx) },
		{ ::image_vnd_pco_b16, ::length_of(::image_vnd_pco_b16) },
		{ ::image_vnd_tencent_tap, ::length_of(::image_vnd_tencent_tap) },
		{ ::image_vnd_valve_source_texture, ::length_of(::image_vnd_valve_source_texture) },
		{ ::image_vnd_wap_wbmp, ::length_of(::image_vnd_wap_wbmp) },
		{ ::image_vnd_xiff, ::length_of(::image_vnd_xiff) },
		{ ::image_vnd_zbrush_pcx, ::length_of(::image_vnd_zbrush_pcx) },
		{ ::image_webp, ::length_of(::image_webp) },
		{ ::image_wmf, ::length_of(::image_wmf) },
		{ ::image_x_minus_3ds, ::length_of(::image_x_minus_3ds) },
		{ ::image_x_minus_cmu_minus_raster, ::length_of(::image_x_minus_cmu_minus_raster) },
		{ ::image_x_minus_cmx, ::length_of(::image_x_minus_cmx) },
		{ ::image_x_minus_freehand, ::length_of(::image_x_minus_freehand) },
		{ ::image_x_minus_icon, ::length_of(::image_x_minus_icon) },
		{ ::image_x_minus_jng, ::length_of(::image_x_minus_jng) },
		{ ::image_x_minus_mrsid_minus_image, ::length_of(::image_x_minus_mrsid_minus_image) },
		{ ::image_x_minus_ms_minus_bmp, ::length_of(::image_x_minus_ms_minus_bmp) },
		{ ::image_x_minus_pcx, ::length_of(::image_x_minus_pcx) },
		{ ::image_x_minus_pict, ::length_of(::image_x_minus_pict) },
		{ ::image_x_minus_portable_minus_anymap, ::length_of(::image_x_minus_portable_minus_anymap) },
		{ ::image_x_minus_portable_minus_bitmap, ::length_of(::image_x_minus_portable_minus_bitmap) },
		{ ::image_x_minus_portable_minus_graymap, ::length_of(::image_x_minus_portable_minus_graymap) },
		{ ::image_x_minus_portable_minus_pixmap, ::length_of(::image_x_minus_portable_minus_pixmap) },
		{ ::image_x_minus_rgb, ::length_of(::image_x_minus_rgb) },
		{ ::image_x_minus_tga, ::length_of(::image_x_minus_tga) },
		{ ::image_x_minus_xbitmap, ::length_of(::image_x_minus_xbitmap) },
		{ ::image_x_minus_xpixmap, ::length_of(::image_x_minus_xpixmap) },
		{ ::image_x_minus_xwindowdump, ::length_of(::image_x_minus_xwindowdump) },
		{ ::message_disposition_minus_notification, ::length_of(::message_disposition_minus_notification) },
		{ ::message_global, ::length_of(::message_global) },
		{ ::message_global_minus_delivery_minus_status, ::length_of(::message_global_minus_delivery_minus_status) },
		{ ::message_global_minus_disposition_minus_notification, ::length_of(::message_global_minus_disposition_minus_notification) },
		{ ::message_global_minus_headers, ::length_of(::message_global_minus_headers) },
		{ ::message_rfc822, ::length_of(::message_rfc822) },
		{ ::message_vnd_wfa_wsc, ::length_of(::message_vnd_wfa_wsc) },
		{ ::model_3mf, ::length_of(::model_3mf) },
		{ ::model_gltf_plus_json, ::length_of(::model_gltf_plus_json) },
		{ ::model_gltf_minus_binary, ::length_of(::model_gltf_minus_binary) },
		{ ::model_iges, ::length_of(::model_iges) },
		{ ::model_mesh, ::length_of(::model_mesh) },
		{ ::model_mtl, ::length_of(::model_mtl) },
		{ ::model_obj, ::length_of(::model_obj) },
		{ ::model_step_plus_xml, ::length_of(::model_step_plus_xml) },
		{ ::model_step_plus_zip, ::length_of(::model_step_plus_zip) },
		{ ::model_step_minus_xml_plus_zip, ::length_of(::model_step_minus_xml_plus_zip) },
		{ ::model_stl, ::length_of(::model_stl) },
		{ ::model_vnd_collada_plus_xml, ::length_of(::model_vnd_collada_plus_xml) },
		{ ::model_vnd_dwf, ::length_of(::model_vnd_dwf) },
		{ ::model_vnd_gdl, ::length_of(::model_vnd_gdl) },
		{ ::model_vnd_gtw, ::length_of(::model_vnd_gtw) },
		{ ::model_vnd_mts, ::length_of(::model_vnd_mts) },
		{ ::model_vnd_opengex, ::length_of(::model_vnd_opengex) },
		{ ::model_vnd_parasolid_transmit_binary, ::length_of(::model_vnd_parasolid_transmit_binary) },
		{ ::model_vnd_parasolid_transmit_text, ::length_of(::model_vnd_parasolid_transmit_text) },
		{ ::model_vnd_sap_vds, ::length_of(::model_vnd_sap_vds) },
		{ ::model_vnd_usdz_plus_zip, ::length_of(::model_vnd_usdz_plus_zip) },
		{ ::model_vnd_valve_source_compiled_minus_map, ::length_of(::model_vnd_valve_source_compiled_minus_map) },
		{ ::model_vnd_vtu, ::length_of(::model_vnd_vtu) },
		{ ::model_vrml, ::length_of(::model_vrml) },
		{ ::model_x3d_plus_binary, ::length_of(::model_x3d_plus_binary) },
		{ ::model_x3d_plus_fastinfoset, ::length_of(::model_x3d_plus_fastinfoset) },
		{ ::model_x3d_plus_vrml, ::length_of(::model_x3d_plus_vrml) },
		{ ::model_x3d_plus_xml, ::length_of(::model_x3d_plus_xml) },
		{ ::model_x3d_minus_vrml, ::length_of(::model_x3d_minus_vrml) },
		{ ::text_cache_minus_manifest, ::length_of(::text_cache_minus_manifest) },
		{ ::text_calendar, ::length_of(::text_calendar) },
		{ ::text_coffeescript, ::length_of(::text_coffeescript) },
		{ ::text_css, ::length_of(::text_css) },
		{ ::text_csv, ::length_of(::text_csv) },
		{ ::text_html, ::length_of(::text_html) },
		{ ::text_jade, ::length_of(::text_jade) },
		{ ::text_jsx, ::length_of(::text_jsx) },
		{ ::text_less, ::length_of(::text_less) },
		{ ::text_markdown, ::length_of(::text_markdown) },
		{ ::text_mathml, ::length_of(::text_mathml) },
		{ ::text_mdx, ::length_of(::text_mdx) },
		{ ::text_n3, ::length_of(::text_n3) },
		{ ::text_plain, ::length_of(::text_plain) },
		{ ::text_prs_lines_tag, ::length_of(::text_prs_lines_tag) },
		{ ::text_richtext, ::length_of(::text_richtext) },
		{ ::text_rtf, ::length_of(::text_rtf) },
		{ ::text_sgml, ::length_of(::text_sgml) },
		{ ::text_shex, ::length_of(::text_shex) },
		{ ::text_slim, ::length_of(::text_slim) },
		{ ::text_spdx, ::length_of(::text_spdx) },
		{ ::text_stylus, ::length_of(::text_stylus) },
		{ ::text_tab_minus_separated_minus_values, ::length_of(::text_tab_minus_separated_minus_values) },
		{ ::text_troff, ::length_of(::text_troff) },
		{ ::text_turtle, ::length_of(::text_turtle) },
		{ ::text_uri_minus_list, ::length_of(::text_uri_minus_list) },
		{ ::text_vcard, ::length_of(::text_vcard) },
		{ ::text_vnd_curl, ::length_of(::text_vnd_curl) },
		{ ::text_vnd_curl_dcurl, ::length_of(::text_vnd_curl_dcurl) },
		{ ::text_vnd_curl_mcurl, ::length_of(::text_vnd_curl_mcurl) },
		{ ::text_vnd_curl_scurl, ::length_of(::text_vnd_curl_scurl) },
		{ ::text_vnd_dvb_subtitle, ::length_of(::text_vnd_dvb_subtitle) },
		{ ::text_vnd_familysearch_gedcom, ::length_of(::text_vnd_familysearch_gedcom) },
		{ ::text_vnd_fly, ::length_of(::text_vnd_fly) },
		{ ::text_vnd_fmi_flexstor, ::length_of(::text_vnd_fmi_flexstor) },
		{ ::text_vnd_graphviz, ::length_of(::text_vnd_graphviz) },
		{ ::text_vnd_in3d_3dml, ::length_of(::text_vnd_in3d_3dml) },
		{ ::text_vnd_in3d_spot, ::length_of(::text_vnd_in3d_spot) },
		{ ::text_vnd_sun_j2me_app_minus_descriptor, ::length_of(::text_vnd_sun_j2me_app_minus_descriptor) },
		{ ::text_vnd_wap_wml, ::length_of(::text_vnd_wap_wml) },
		{ ::text_vnd_wap_wmlscript, ::length_of(::text_vnd_wap_wmlscript) },
		{ ::text_vtt, ::length_of(::text_vtt) },
		{ ::text_x_minus_asm, ::length_of(::text_x_minus_asm) },
		{ ::text_x_minus_c, ::length_of(::text_x_minus_c) },
		{ ::text_x_minus_component, ::length_of(::text_x_minus_component) },
		{ ::text_x_minus_fortran, ::length_of(::text_x_minus_fortran) },
		{ ::text_x_minus_handlebars_minus_template, ::length_of(::text_x_minus_handlebars_minus_template) },
		{ ::text_x_minus_java_minus_source, ::length_of(::text_x_minus_java_minus_source) },
		{ ::text_x_minus_lua, ::length_of(::text_x_minus_lua) },
		{ ::text_x_minus_markdown, ::length_of(::text_x_minus_markdown) },
		{ ::text_x_minus_nfo, ::length_of(::text_x_minus_nfo) },
		{ ::text_x_minus_opml, ::length_of(::text_x_minus_opml) },
		{ ::text_x_minus_org, ::length_of(::text_x_minus_org) },
		{ ::text_x_minus_pascal, ::length_of(::text_x_minus_pascal) },
		{ ::text_x_minus_processing, ::length_of(::text_x_minus_processing) },
		{ ::text_x_minus_sass, ::length_of(::text_x_minus_sass) },
		{ ::text_x_minus_scss, ::length_of(::text_x_minus_scss) },
		{ ::text_x_minus_setext, ::length_of(::text_x_minus_setext) },
		{ ::text_x_minus_sfv, ::length_of(::text_x_minus_sfv) },
		{ ::text_x_minus_suse_minus_ymp, ::length_of(::text_x_minus_suse_minus_ymp) },
		{ ::text_x_minus_uuencode, ::length_of(::text_x_minus_uuencode) },
		{ ::text_x_minus_vcalendar, ::length_of(::text_x_minus_vcalendar) },
		{ ::text_x_minus_vcard, ::length_of(::text_x_minus_vcard) },
		{ ::text_xml, ::length_of(::text_xml) },
		{ ::text_yaml, ::length_of(::text_yaml) },
		{ ::video_3gpp, ::length_of(::video_3gpp) },
		{ ::video_3gpp2, ::length_of(::video_3gpp2) },
		{ ::video_h261, ::length_of(::video_h261) },
		{ ::video_h263, ::length_of(::video_h263) },
		{ ::video_h264, ::length_of(::video_h264) },
		{ ::video_iso_segment, ::length_of(::video_iso_segment) },
		{ ::video_jpeg, ::length_of(::video_jpeg) },
		{ ::video_jpm, ::length_of(::video_jpm) },
		{ ::video_mj2, ::length_of(::video_mj2) },
		{ ::video_mp2t, ::length_of(::video_mp2t) },
		{ ::video_mp4, ::length_of(::video_mp4) },
		{ ::video_mpeg, ::length_of(::video_mpeg) },
		{ ::video_ogg, ::length_of(::video_ogg) },
		{ ::video_quicktime, ::length_of(::video_quicktime) },
		{ ::video_vnd_dece_hd, ::length_of(::video_vnd_dece_hd) },
		{ ::video_vnd_dece_mobile, ::length_of(::video_vnd_dece_mobile) },
		{ ::video_vnd_dece_pd, ::length_of(::video_vnd_dece_pd) },
		{ ::video_vnd_dece_sd, ::length_of(::video_vnd_dece_sd) },
		{ ::video_vnd_dece_video, ::length_of(::video_vnd_dece_video) },
		{ ::video_vnd_dvb_file, ::length_of(::video_vnd_dvb_file) },
		{ ::video_vnd_fvt, ::length_of(::video_vnd_fvt) },
		{ ::video_vnd_mpegurl, ::length_of(::video_vnd_mpegurl) },
		{ ::video_vnd_ms_minus_playready_media_pyv, ::length_of(::video_vnd_ms_minus_playready_media_pyv) },
		{ ::video_vnd_uvvu_mp4, ::length_of(::video_vnd_uvvu_mp4) },
		{ ::video_vnd_vivo, ::length_of(::video_vnd_vivo) },
		{ ::video_webm, ::length_of(::video_webm) },
		{ ::video_x_minus_f4v, ::length_of(::video_x_minus_f4v) },
		{ ::video_x_minus_fli, ::length_of(::video_x_minus_fli) },
		{ ::video_x_minus_flv, ::length_of(::video_x_minus_flv) },
		{ ::video_x_minus_m4v, ::length_of(::video_x_minus_m4v) },
		{ ::video_x_minus_matroska, ::length_of(::video_x_minus_matroska) },
		{ ::video_x_minus_mng, ::length_of(::video_x_minus_mng) },
		{ ::video_x_minus_ms_minus_asf, ::length_of(::video_x_minus_ms_minus_asf) },
		{ ::video_x_minus_ms_minus_vob, ::length_of(::video_x_minus_ms_minus_vob) },
		{ ::video_x_minus_ms_minus_wm, ::length_of(::video_x_minus_ms_minus_wm) },
		{ ::video_x_minus_ms_minus_wmv, ::length_of(::video_x_minus_ms_minus_wmv) },
		{ ::video_x_minus_ms_minus_wmx, ::length_of(::video_x_minus_ms_minus_wmx) },
		{ ::video_x_minus_ms_minus_wvx, ::length_of(::video_x_minus_ms_minus_wvx) },
		{ ::video_x_minus_msvideo, ::length_of(::video_x_minus_msvideo) },
		{ ::video_x_minus_sgi_minus_movie, ::length_of(::video_x_minus_sgi_minus_movie) },
		{ ::video_x_minus_smv, ::length_of(::video_x_minus_smv) },
		{ ::x_minus_conference_x_minus_cooltalk, ::length_of(::x_minus_conference_x_minus_cooltalk) },
		};
	}    // namespace details
}    // namespace mime