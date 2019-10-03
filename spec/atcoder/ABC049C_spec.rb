# frozen_string_literal: true

require 'spec_helper'
require_relative '../../atcoder/ABC049C'

describe 'test' do
  it do
    allow(ARGF).to receive(:gets) { "dreamer\n" }
    expect { run }.to output("YES\n").to_stdout
  end

  it do
    allow(ARGF).to receive(:gets) { "dreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamerdreamer\n" }
    expect { run }.to output("YES\n").to_stdout
  end
end
